#include<stdio.h>
#include<ctype.h>
#include "main.h"
/**
 * _isalpha - check the code
 * @c: any integer value
 * Return: Always 0.
 */
int _isalpha(int c)
{
return (isalpha(c) > 0? 1 : 0);
}
