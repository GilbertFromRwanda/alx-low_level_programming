#include "main.h"
#include<string.h>
/**
 * _strdup - check the code
 *@str: given string need to be copied
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *str2;
if (str == NULL)
{
return (NULL);
}
str2 = (char*)strdup(str);
if (str2 == NULL)
{
return (NULL);
}
return (str2);
}
