#include<stdio.h>
#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i=0,j=0;
for (i = 0;i <= 9;i++)
{
for (j = 0;j <= 9;j++)
{
printf("%d", i*j);
if (i*j != 81)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
