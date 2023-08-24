#ifndef ELF_HEADER_H
#define ELF_HEADER_H

#include <stdint.h>

void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi_version(unsigned char *e_ident);
void print_type(uint16_t e_type);
void print_entry(uint64_t e_entry);
void elf_header(const char *filename);

#endif /* ELF_HEADER_H */

