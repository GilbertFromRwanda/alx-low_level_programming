#include<stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
char fun[8] = "_putchar";
while (i < 8)
{
_putchar(fun[i]);
i++;
}
_putchar('\n');
return (0);
}
