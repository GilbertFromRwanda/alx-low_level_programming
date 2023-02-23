#include "main.h"

/**
* print_triangle - function code
*@n: integer value
* Return: 0
*/
void print_triangle(int n)
{
int i = 1, j = 0, k = 0;
if (n > 0)
{
while (i <= n)
{
while (j < n - i)
{
_putchar(' ');
j++;
}
while (k < i)
{
_putchar('#');
k++;
}
j = 0;
k = 0;
i++;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
