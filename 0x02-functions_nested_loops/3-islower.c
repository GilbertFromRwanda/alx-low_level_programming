#include<stdio.h>
#include<ctype.h>
#include "main.h"
/**
 * _islower - check the code for checking if character is lower
 *
 * c: parameter
 *
 * Return: Always 0.
 */

int _islower(int c)
{
return (islower(c) > 0 ? 1 : 0);
}
