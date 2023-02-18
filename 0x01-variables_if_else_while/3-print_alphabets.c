#include<stdio.h>

/**
 *main -Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
char alfa[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ  ";
for (i = 0; i < 52; i++)
{
putchar(alfa[i]);
}
putchar('\n');
return (0);
}
