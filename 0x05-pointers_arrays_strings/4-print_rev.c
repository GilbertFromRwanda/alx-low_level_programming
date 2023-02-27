#include "main.h"

/**
* print_rev - function code
*@s: string
* Return: 0
*/
void print_rev(char *s);
{
int i = strlen(s);
while (i >= 0)
{
_putchar(s[i]);
--i;  
}
}
