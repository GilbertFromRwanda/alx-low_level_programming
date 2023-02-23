#include "main.h"

/**
* print_line - function code
*@n: integer value
* Return: 0
*/
void  print_line(int n)
{
int i = 1;
if (n > 0)
{
while (i <= n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
