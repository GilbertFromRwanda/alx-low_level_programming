#include "main.h"

/**
* print_most_numbers - function code
*
* Return: 0
*/
void print_most_numbers()
{
int i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
i++;
}
}
