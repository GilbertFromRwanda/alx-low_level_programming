#include "main.h"

/**
* print_rev - function code
*@s: string
* Return: 0
*/

void print_rev(char *s)
{
int g, i = strlen(s);
for(g = i - 1; g >= 0; g--)
{
_putchar(s[g]);
}
}
