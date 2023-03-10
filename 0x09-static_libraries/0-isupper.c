#include<ctype.h>
#include "main.h"

/**
* _isupper - fun for checking if given char is uppercase
*@c: integer value
* Return: 0
*/
int _isupper(int c)
{
return (isupper(c) > 0 ? 1 : 0);
}
