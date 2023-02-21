#include<stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 *
 *add - summation on two integers number and return the result
 */
int add(int, int);
int main(void)
{
int n;
n = add(89, 9);
printf("%d\n", n);
return (0);
}
int add(int n1, int n2)
{
return n1+n2;
}
