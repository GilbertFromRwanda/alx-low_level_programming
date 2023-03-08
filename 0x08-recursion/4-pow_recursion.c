#include "main.h"
#include<math.h>

/**
 * _pow_recursion - check the code
 *@x: integer
 *@y: integer
 * Return: Always sizeof s.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
return (pow(x, y));
}
