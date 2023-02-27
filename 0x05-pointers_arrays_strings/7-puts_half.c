#include "main.h"

/**
* puts_half - function code
*@str: string
* Return: 0
*/

void puts_half(char *str)
{
int g, e = strlen(str), i = strlen(str);
if (e % 2 == 1)
{
i = e + 2;
}
for (g = i / 2; g < e; g++)
{
_putchar(str[g]);
}
_putchar('\n');
}
