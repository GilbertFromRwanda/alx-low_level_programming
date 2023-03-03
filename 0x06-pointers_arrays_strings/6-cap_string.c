#include "main.h"

/**
* cap_string - function code
*@s: string
* Return: 0
*/
char *cap_string(char *s)
{
int i = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (isspace(s[i]) > 0 || s[i] == '.')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}
