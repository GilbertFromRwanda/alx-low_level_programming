#include "main.h"

/**
* puts2 - function code
*@str: string
* Return: 0
*/
void puts2(char *str)
{
int g, i = strlen(str);
for (g = 0; g < i; g = g + 2)
{
_putchar(str[g]);
}
_putchar('\n');
}
