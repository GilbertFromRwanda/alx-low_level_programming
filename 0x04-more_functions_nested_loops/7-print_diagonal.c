#include "main.h"

/**
* print_diagonal - function code
*@n: integer value
* Return: 0
*/
void  print_diagonal(int n)
{
int i = 1, s = 0;
if (n > 0)
{
while (i <= n)
{
while (s < i)
{
_putchar(' ');
s++;
}
_putchar('\\');
_putchar('\n');
i++;
s = 0;
}
}
else
{
_putchar('\n');
}
}
