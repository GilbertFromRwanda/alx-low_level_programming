
#include "main.h"

/**
* reverse_array - function code
*@a: pointer of int 
*@n: number of element from array 
* Return: 0
*/
void reverse_array(int *a, int n)
{
int i, len, temp;
len = n;
for (i = 0; i < len / 2; i++)
{
temp = a[i];
a[i] = a[len - i - 1];
a[len - i - 1] = temp;
}
}
