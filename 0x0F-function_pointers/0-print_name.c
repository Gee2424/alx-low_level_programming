#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - Prints a name using a function pointer
* @name: Pointer to the name to be printed
* @f: Function pointer to the printing function
*
* Return: None
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}

