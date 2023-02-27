#include "main.h"

/**
* puts_half - function code
*@str: string
* Return: 0
*/
void puts_half(char *str)
{
int g, i = strlen(str) / 2;
if (i % 2 != 0)
{
i = (i -1) / 2;
}
for (g = i; g < i; g++)
{
_putchar(str[g]);
}
_putchar('\n');
}
