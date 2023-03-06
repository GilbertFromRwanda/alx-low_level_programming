#include "main.h"

/**
* _strspn - function code
*@a: string array
* Return: nothing
*/
void print_chessboard(char (*a)[8])
{
int i, j = 0;
for (i = 0; i < 8; i++)
{
for (j = 0; j <8 ; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
