#include "main.h"

/**
* _strspn - function code
*@a:  array
*@size: size of array
* Return: nothing
*/
void print_diagsums(int *a, int size)
{
int i, j, d1, d2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size ; j++)
{
if (i == j)
{
d1+= a[i][j];
d2+= a[i][size - i - 1];
break;
}
}
}
printf("%d, %d", d1, d2);
}
