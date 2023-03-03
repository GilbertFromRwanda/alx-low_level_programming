#include "main.h"

/**
 * rot13 - check the code
 *@s: string
 *
 * Return: always string.
 */
char *rot13(char *s)
{
char *c = "ANABOBCPCDQDEREFSFGTGHUHIVIJWJKXKLYLMZMNANOBOPCPQDRERSFSTGTUHUVIVWJWXKXYLYZMZanabobcpcdqderefsfgtghuhivijwjkxklylmzmnanobopcpqdrersfstgtuhuvivwjwxkxylyzmz";
int i, j = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; c[j] != '\0'; j++)
{
if (s[i] == c[j])
{
s[i] = c[j + 1];
break;
}
}
}
return (s);
}
