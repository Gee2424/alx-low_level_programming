# Variadic Functions

This repository contains solutions to the variadic functions tasks. Variadic functions are functions that can accept a variable number of arguments. In this project, we implement various functions that utilize variadic arguments.

## Files

Here's a brief description of the files in this repository:

- `variadic_functions.h`: Header file containing function prototypes and macro definitions for the variadic functions implemented in the tasks.

- `0-sum_them_all.c`: Source file implementing the `sum_them_all` function, which calculates the sum of all its parameters.

- `1-print_numbers.c`: Source file implementing the `print_numbers` function, which prints a series of numbers separated by a specified separator.

- `2-print_strings.c`: Source file implementing the `print_strings` function, which prints a series of strings separated by a specified separator. It handles NULL strings by printing "(nil)".

- `3-print_all.c`: Source file implementing the `print_all` function, which prints a series of values of different types based on the provided format string. It supports characters ('c'), integers ('i'), floats ('f'), and strings ('s').

## Compilation and Usage

To compile the files, use the following command:

```gcc
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main_file.c> <function_file.c> -o <output_file>
```
## Requirements and Notes
The code is written in C and compiled on Ubuntu 20.04 LTS using gcc.
The code follows the Betty coding style.
Global variables are not allowed.
Only the following standard library functions are permitted: malloc, free, and exit.
The provided _putchar function should be used instead of printf.
Each task has its own source file and a corresponding main file for testing.

