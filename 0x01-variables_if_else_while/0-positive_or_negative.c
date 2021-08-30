#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - assingns a new value to n everytime program is executed
 *Return: 0 if execution is success
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
