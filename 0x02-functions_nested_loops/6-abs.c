#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _abs(int);
int main(void)
{
int r;
r = _abs(-1);
_putchar(r + '0');
_putchar('\n');
r = _abs(0);
_putchar(r + '0');
_putchar('\n');
r = _abs(1);
_putchar(r + '0');
_putchar('\n');
r = _abs(98);
printf("%d", r);
_putchar('\n');
return (0);
}
int _abs(int n)
{
  return abs(n);
}
