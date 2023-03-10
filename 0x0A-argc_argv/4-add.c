#include "main.h"

/**
* main - function code
*@argc: count size of array
*@argv: array og argument known as vector
* Return: always 0 or no zero
*/
int main(int argc, char *argv[])
{
int n,sum = 0, c = 1;
if (argc > 1)
{
for (c = 1; c < argc; c++)
{
n = atoi(argv[c]);
if (n == 0)
{
printf("Error\n");
return (0);
}
sum = sum + n;
}
printf ("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
