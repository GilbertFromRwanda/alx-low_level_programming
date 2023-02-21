#include<stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void);
int main(void)
{
jack_bauer();
return (0);
}
void jack_bauer(void)
{
int h=0,i=0;
while (h < 24)
{
while (i <= 59)
{
if (h < 10)
{
_putchar('0');
}
printf("%d:",h);
if (i < 10)
{
_putchar('0');
}
printf("%d\n", i);
i++;
}
i=0;
h++;
_putchar('\n');
}
}
