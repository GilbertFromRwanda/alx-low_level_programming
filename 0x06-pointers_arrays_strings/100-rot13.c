#include "main.h"
struct k_v
{
char *k,*v;
}  
/**
 * rot13 - check the code
 *@s: string
 *@s2: string
 *
 * Return: always string.
 */
struct k_v kv[2];
char *rot13(char *s)
{
char *c = "ABCDEFGHIJKLM";
char *rc = "NOPQRSTUVWXYZ";
char *c1 = "abcdefghijklm";
char *rc1 = "nopqrstuvwxyz";
int i, j, index = 0;
char sc;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; c[j] != '\0'; j++)
{
if (s[i] == c[j])
{
str[i] = str[i] - 32;
}
return (strcmp(s1, s2));
}
