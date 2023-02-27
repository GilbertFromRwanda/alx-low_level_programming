#include "main.h"

/**
*swap_int - function code
*@a: address for integer
@b: integer b address
* Return: 0
*/

int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}

void swap_int(int *a, int *b)
{
int *t = *a;
*a = *b;
*b = t;
}
