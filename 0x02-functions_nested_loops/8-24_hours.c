#include<stdio.h>
#include "main.h"
/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int h = 0,i = 0;
while (h < 24)
{
while (i <= 59)
{
if (h < 10 && i < 10)
{
printf("0%d:0%d\n", h, i);
}
else if (i < 10 && h > 10)
{
printf("%d:0%d\n", h, i);
}
else if (i > 10 && h < 10)
{
printf("0%d:%d\n", h, i);
}
else
{
printf("%d:%d\n", h, i);
}
i++;
}
i=0;
h++;
_putchar('\n');
}
}
