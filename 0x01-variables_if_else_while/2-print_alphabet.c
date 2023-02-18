#include<stdio.h>

/**
 *main - Entry point
 *
 *return : Always return 0 (Success)
 */
int main(void)
{
int i;
char alfa[]="abcdefghijklmnoprstuvwyz";
for (i=0;i < 24;i++)
{
putchar(alfa[i]);
putchar('\n');
}
return (0);
}
