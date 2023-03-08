#include "main.h"

/**
 * _sqrt_recursion - check the code
 *@n:int
 *
 * mysqrt - fun to get square root
 *@x: float
 *@n: float
 *@eps: constant last floot
 *
 * Return: Always sizeof s.
 */

float mysqrt(float n, float x, float eps)
{
float y = (x + n / x) / 2;
if (x - y < eps && y - x < eps)
{
return (y);
}
else
{
return (mysqrt(n, y, eps));
}
}

int _sqrt_recursion(int n)
{
float x = (float)n, eps = 0.000001, res;
int trunc = 0;
if( n < 0)
{
return (-1);
}
res = mysqrt((int)n, x, eps);
trunc =(int)res; 
return (res == trunc ? trunc : -1);
}
