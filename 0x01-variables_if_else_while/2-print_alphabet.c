#include<stdio.h>

/**
 *main -Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
char alfa[] = "abcdefghijklmnopqrstuvwxyz  ";
for (i = 0; i < 26; i++)
{
putchar(alfa[i]);
}
putchar('\n');
return (0);
}
