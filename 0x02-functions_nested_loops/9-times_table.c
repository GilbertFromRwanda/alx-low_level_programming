#include<stdio.h>
#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i = 0, j = 0, p = 1;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
p = i * j;
if (p < 10 && j !=9)
{
printf("%d,  ", p);
}
else if (p >= 10 && j != 9)
{
printf("%d, ", p);
}
else if (j == 9 && p > 10)
{
printf("%d  ", p);
}
else
{
printf("%d ", p);
}
}
printf("\n");
}
}
