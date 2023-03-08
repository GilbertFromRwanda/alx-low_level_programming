#include "main.h"

/**
 * _print_rev_recursion - check the code
 *@s: string
 * reverse - code for reverse
 *@str: string in reverse
 *@index: index
 *@n: integer with length of string
 * Return: Always 0.
 */

void reverse(char *str, int index, int n)
{
if (index == n)
{
return;
}
reverse(str, index + 1, n);
puts(str[index]);
}
void _print_rev_recursion(char *s)
{
int len = strlen(s);
reverse(s, 0, len);
}
