#include "main.h"

/**
 * is_prime_number - check the code
 *@n:int
 * is_prime - fun code prime number
 *@i: int i
 * Return: Always sizeof s.
 */

int is_prime(int n, int i)
{
if (n <= 2)
{
return ((n == 2) ? 1 : 0);
}
if (n % i == 0)
{
return (0);
}
if (i * i > n)
return (1);
return (is_prime(n, i + 1));
}
int is_prime_number(int n)
{
return (is_prime(n, 2));
}
