#include "main.h"

/**
* print_square - function code
*@size: size of the square
* Return: 0
*/
void  print_square(int size)
{
int i = 1, j = 1;
if (size > 0)
{
while (i <= size)
{
while (j <= size)
{
_putchar('#');
j++;
}
j = 1;
i++;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
