#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define BUF_SIZE 1024

/**
* error_handler - Print error messages and exit.
* @error_code: The error code.
* @filename: The name of the file.
*/
void error_handler(int error_code, const char *filename)
{
switch (error_code)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
break;
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
break;
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
break;
case 100:
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", filename);
break;
}
exit(error_code);
}

/**
* cp_file - Copy the content of one file to another.
* @file_from: The name of the source file.
* @file_to: The name of the destination file.
*/
void cp_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUF_SIZE];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
error_handler(98, file_from);

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
close(fd_from);
error_handler(99, file_to);
}

while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
error_handler(99, file_to);
}
}

if (bytes_read == -1)
{
close(fd_from);
close(fd_to);
error_handler(98, file_from);
}

close(fd_from);
if (close(fd_to) == -1)
error_handler(100, file_to);
}

/**
* main - Entry point of the program.
* @ac: The number of arguments.
* @av: The array of arguments.
*
* Return: Always 0.
*/
int main(int ac, char **av)
{
if (ac != 3)
error_handler(97, NULL);

cp_file(av[1], av[2]);

return (0);
}

