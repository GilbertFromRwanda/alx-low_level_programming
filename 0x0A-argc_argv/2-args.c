#include "main.h"

/**
* main - function code
*@argc: count size of array
*@argv: array og argument known as vector
* Return: always 0 or no zero
*/
int main(int argc, char  *argv[])
{
int c = 0;
while (c < argc)
{
printf("%s\n", argv[c]);
c++;
}
return (0);
}
