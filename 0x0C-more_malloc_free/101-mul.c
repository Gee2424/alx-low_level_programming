#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* is_digit - checks if a string is a valid positive number
* @str: string to check
*
* Return: 1 if valid number, 0 otherwise
*/
int is_digit(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
return (0);
}
return (1);
}

/**
* multiply - multiplies two positive numbers represented as strings
* @num1: first number
* @num2: second number
*
* Return: result of multiplication as a string
*/
char *multiply(char *num1, char *num2)
{
int len1, len2, i, j, carry, n1, n2, sum;
int *result;
char *mul;

len1 = strlen(num1);
len2 = strlen(num2);
result = calloc(len1 + len2, sizeof(int));

for (i = len1 - 1; i >= 0; i--)
{
n1 = num1[i] - '0';
carry = 0;

for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
sum = n1 * n2 + result[i + j + 1] + carry;
carry = sum / 10;
result[i + j + 1] = sum % 10;
}

if (carry > 0)
result[i + j + 1] += carry;
}

mul = malloc((len1 + len2 + 1) * sizeof(char));
if (mul == NULL)
{
free(result);
return (NULL);
}

i = 0;
j = 0;
while (i < len1 + len2 && result[i] == 0)
i++;

while (i < len1 + len2)
mul[j++] = result[i++] + '0';

mul[j] = '\0';
free(result);
return (mul);
}

/**
* main - entry point
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 1 otherwise
*/
int main(int argc, char *argv[])
{
char *num1, *num2, *result;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}

num1 = argv[1];
num2 = argv[2];
result = multiply(num1, num2);

if (result == NULL)
{
printf("Error\n");
return (98);
}

printf("%s\n", result);
free(result);
return (0);
}


