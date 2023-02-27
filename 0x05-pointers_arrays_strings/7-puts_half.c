#include "main.h"

/**
* puts_half - function code
*@str: string
* Return: 0
*/
void puts_half(char *str)
{
int g, i = strlen(str);
if (i % 2 != 0)
{
--i;
}
for (g = i / 2; g < i; g++)
{
_putchar(str[g]);
}
_putchar('\n');
}
