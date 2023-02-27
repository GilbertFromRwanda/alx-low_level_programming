#include "main.h"

/**
*swap_int - function code
*@a: address for integer
@b: integer b address
* Return: 0
*/
void swap_int(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}
