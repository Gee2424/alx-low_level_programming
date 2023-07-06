#include "main.h"

int is_prime_helper(int n, int i);  /* Forward declaration */

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 *                   otherwise returns 0.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
  if (n <= 1)
    return 0;

  return is_prime_helper(n, 2);
}

/**
 * is_prime_helper - Recursive helper function to check for divisibility.
 * @n: The number to be checked.
 * @i: The current value to check for divisibility.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
  if (i == n)
    return 1;

  if (n % i == 0)
    return 0;

  return is_prime_helper(n, i + 1);
}

