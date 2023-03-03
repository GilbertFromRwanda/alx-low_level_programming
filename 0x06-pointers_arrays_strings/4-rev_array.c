#include "main.h"

/**
 * reverse_array - check the code
 *@a: pointer int
 *@n: integer
 *
 * Return: always string.
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
