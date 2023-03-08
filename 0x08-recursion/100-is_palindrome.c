#include "main.h"

/**
 * is_palindrome - check the code
 *@s: string
 * is_pali: - fun code check palidrome
 *@e: int end of string
 *@s: starting point
 *@str: string given to is_pali
 * Return: Always sizeof s.
 */

int is_pali(char *str, int s, int e)
{
if (s >= e)
{
return (1);
}
else if (str[s] != str[e])
{
return (0);
}
else
{
return (is_pali(str, s + 1, e - 1));
}
}
int is_palindrome(char *s)
{
return (is_pali(s, 0, strlen(s) - 1));
}
