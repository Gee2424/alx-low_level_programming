#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdlib.h>
#include "main.h"

void print_magic(unsigned char *e_ident) {
int i;
printf("Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", e_ident[i]);
printf("\n");
}

void print_class(unsigned char *e_ident) {
printf("Class:                             ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("None\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
break;
}
}

void print_data(unsigned char *e_ident) {
printf("Data:                              ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("None\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_DATA]);
break;
}
}

void print_version(unsigned char *e_ident) {
printf("Version:                           %d (current)\n", e_ident[EI_VERSION]);
}

void print_osabi(unsigned char *e_ident) {
printf("OS/ABI:                            ");
switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
break;
}
}

void print_abi_version(unsigned char *e_ident) {
printf("ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

void print_type(uint16_t e_type) {
printf("Type:                              ");
switch (e_type)
{
case ET_NONE:
printf("NONE (Unknown Type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
break;
}
}

void print_entry(uint64_t e_entry) {
printf("Entry point address:               0x%lx\n", (unsigned long)e_entry);
}

void elf_header(const char *filename) {
int fd;
Elf64_Ehdr header;

fd = open(filename, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", filename);
exit(98);
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", filename);
close(fd);
exit(98);
}

print_magic(header.e_ident);
print_class(header.e_ident);
print_data(header.e_ident);
print_version(header.e_ident);
print_osabi(header.e_ident);
print_abi_version(header.e_ident);
print_type(header.e_type);
print_entry(header.e_entry);

close(fd);
}

int main(int ac, char **av) {
if (ac != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]);
exit(97);
}

elf_header(av[1]);

return (0);
}

