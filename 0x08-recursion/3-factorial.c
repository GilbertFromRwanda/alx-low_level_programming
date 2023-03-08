#include "main.h"

/**
 * factorial - check the code
 *@n: integer
 *
 * Return: Always number.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
