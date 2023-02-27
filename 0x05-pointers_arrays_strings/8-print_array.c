#include "main.h"

/**
* print_array - function code
*@a: pointer of array
*@n: number of array element
* Return: 0
*/
void print_array(int *a, int n)
{
int g;
for (g =0; g < n; g++)
{
printf("%d",a[g]);
if (g != n - 1)
{
printf(", ");
}
}
printf("\n");
}
