#include "main.h"

/**
 * is_prime_number - check the code
 *@n:int
 *
 * Return: Always sizeof s.
 */
/**
 * is_prime - fun code checking prime number
 *@n: int
 *@i : in start at 2
 *
 * Return: 0 or 1
 *
*/
int is_prime(int n, int i)
{
if (n <= 2)
{
return (n == 2) ? 1 : 0;
}
if (n % i == 0)
{
return 0;
}
if (i * i > n) {
return 1;
}
return is_prime(n, i + 1);
}
int is_prime_number(int n)
{
return (is_prime(n, 2));
}
