#include<stdio.h>

/**
 *main - Entry point
 *
 *return : Always return 0 (Success)
 */
int main(void)
{
int i;
char alfa[] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 24; i++)
{
putchar(alfa[i]);
}
return (0);
}
