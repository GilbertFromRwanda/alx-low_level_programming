#include "main.h"

/**
* cap_string - function code
*@str: string
* Return: 0
*/
char *cap_string(char *str)
{
int i = 0;
for (i = 0; str[i] != '\0'; i++)
{
if(isspace(str[i]) > 0 || str[i] == '.')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] = str[i + 1] - 32;
} 
}
}
return (str);
}
