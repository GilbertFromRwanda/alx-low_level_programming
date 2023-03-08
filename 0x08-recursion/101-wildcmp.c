#include "main.h"

/**
 * wildcmp - check the code
 *@s1: string 1
 *@s2: string 2
 *comapre_s: - fun code check palidrome
 *@str1: starting point
 *@str2: string given to comapre_s
 *@i: starting point
 * Return: Always sizeof s.
 */

int compare_s(char *str1, char *str2, int i)
{
if (str1[i] == '\0' && str2[i] == '\0')
{
return (1);
}
else if (str2[i] == '*')
{
return (1);
}
else if (str1[i] == str2[i])
{
return (compare_s(str1, str2, i + 1));
}
else
{
return (0);
}
}
int wildcmp(char *s1, char *s2)
{
return (compare_s(s1, s2, 0));
}
