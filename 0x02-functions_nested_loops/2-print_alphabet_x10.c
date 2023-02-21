#include<stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
int main(void)
{
print_alphabet_x10();
return (0);
}
void print_alphabet_x10(void)
{
char c;
int i=1;
while (i <= 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
