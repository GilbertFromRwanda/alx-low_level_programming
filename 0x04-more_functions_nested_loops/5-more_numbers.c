#include "main.h"

/**
* more_numbers - function code
*
* Return: 0
*/
void more_numbers(void)
{
int i = 0, j = 0;
while (i < 10)
{
while (j <= 14)
{
printf("%d", j);
j++;
}
j = 0;
i++;
_putchar('\n');
}
_putchar('\n');
}
