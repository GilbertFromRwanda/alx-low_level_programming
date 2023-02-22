#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * print_last_digit  - check the code
 *@n: integer
 * Return: Always 0.
 */
int print_last_digit(int n)
{
if (n == -2147483648)
{
_putchar('8');
return (8);
}
else
{
int ld;
ld = abs(n) % 10;
_putchar('0' + ld);
return (ld);
}
}
