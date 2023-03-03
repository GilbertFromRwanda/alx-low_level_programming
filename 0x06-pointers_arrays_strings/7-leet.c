#include "main.h"
struct k_v
{
int v;
char c;
};

/**
* leet - function code
*@str: string 
* Return: string
*/
struct k_v mc[10];
char *leet(char *str)
{
int i, j = 0;
mc[0].c = 'a';
mc[0].v = '4';
mc[1].c = 'A';
mc[1].v = '4';
mc[2].c = 'o';
mc[2].v = '0';
mc[3].c = 'O';
mc[3].v = '0';
mc[4].c = 't';
mc[4].v = '7';
mc[5].c = 'T';
mc[5].v = '7';
mc[6].c ='l';
mc[6].v = '1';
mc[7].c = 'L';
mc[7].v = '1';
mc[8].c = 'e';
mc[8].v = '3';
mc[9].c = 'E';
mc[9].v = '3';
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == mc[j].c)
{
str[i] = mc[j].v;
}
}
}
return (str);
}
