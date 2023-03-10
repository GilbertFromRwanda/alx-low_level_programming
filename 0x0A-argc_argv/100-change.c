#include "main.h"

/**
* main - function code
*@argc: count size of array
*@argv: array og argument known as vector
* Return: always 0 or no zero
*/

int ch(int);
int main(int argc, char *argv[])
{
int d, r, m = 0, c = 0;
if (argc != 1)
{
printf("Error\n");
return (1);
}
m = atoi(argv[1]);
if (m < 0)
{
printf("0\n");
}
else
{
if (m >= 25)
{
d = m / 25 ;
c = d;
r = m % 25;
if (r == 0)
{
printf("%d\n", d);
}
else
{
if (r >= 10)
{
d = r / 10;
c = c + d;
r = r % 10;
if (r >= 5)
{
d = r / 5;
c = c + d;
r = r % 5;

}
}
}
 
}
else if(m >= 10)
{

}
else if (m >= 5)
{

}
else
{
}
}
return (0);
}
