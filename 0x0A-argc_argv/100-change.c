#include "main.h"

/**
* main - function code
*@argc: count size of array
*@argv: array og argument known as vector
* Return: always 0 or no zero
*/

int ch(int);
int main(int argc, char  __attribute__((unused)) *argv[])
{
int d, r, m = 0, c = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
m = atoi(argv[1]);
if (m < 0)
{
printf("0\n");
}
else
{
d = m / 25;
r = m % 25;
c = d;
d = r / 10;
r = r % 10;
c = c + d;
d = r / 5;
r = r % 5;
c = c + d;
d = r / 2;
r = r % 2;
c = c + d;
d = r / 1;
c = c + d;
printf("%d\n", c);
}
}
return (0);
}
