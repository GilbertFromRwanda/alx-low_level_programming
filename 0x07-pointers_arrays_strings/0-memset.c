#include "main.h"

/**
* _memset - function code
*@s: string
*@b: string
*@n: numeric
* Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
  int c = (int) b;
return (memset(s, c, n));
}
