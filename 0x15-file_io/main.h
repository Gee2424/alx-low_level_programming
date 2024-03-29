#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/* 0. Tread lightly, she is near */
ssize_t read_textfile(const char *filename, size_t letters);

/* 1. Under the snow */
int create_file(const char *filename, char *text_content);

/* 2. Speak gently, she can hear */
int append_text_to_file(const char *filename, char *text_content);

/* 3. cp */
int cp(const char *file_from, const char *file_to);

/* Advanced: 4. elf */
void elf_header(const char *filename);

#endif /* MAIN_H */

