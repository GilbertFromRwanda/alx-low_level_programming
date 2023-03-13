#include "main.h"

/**
 * create_array - check the code
 *@size: size of array
 *@c: char
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char __attribute__((unused)) c)
{
char *cp;
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
cp = (char *)malloc(size * sizeof(char));
if (cp == NULL)
{
return (NULL);
}
while (i < size)
{
cp[i] = c;
i++;
}
return (cp);
}
