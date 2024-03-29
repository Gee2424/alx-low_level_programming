#include "main.h"

int sqrt_helper(int n, int i); 

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose natural square root is calculated.
 *
 * Return: The calculated square root or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
  if (n < 0)
    return -1;

  if (n == 0 || n == 1)
    return n;

  return sqrt_helper(n, 1);
}

/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number whose natural square root is calculated.
 * @i: The current value to check for a square root.
 *
 * Return: The calculated square root or -1 if no natural square root exists.
 */
int sqrt_helper(int n, int i)
{
  if (i * i > n)
    return -1;

  if (i * i == n)
    return i;

  return sqrt_helper(n, i + 1);
}

