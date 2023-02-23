#include<ctype.h>
#include "main.h"

/**
* _isdigit - user function
*@c: integer value
* Return: 0
*/
int _isdigit(int c)
{
return (isdigit(c) > 0 ? 1 : 0);
}
