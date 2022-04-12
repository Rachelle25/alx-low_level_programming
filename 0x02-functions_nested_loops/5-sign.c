#include "main.h"
/**
* print_sign - print the sign of a number n
* @n: function parameter of type int
* Return: returns 1 and prints + if n is greater then zero
*/
int print_sign(int n)
{
int test;
if (n > 0)
{
test = 1;
_putchar('+');
}
else if (n == 0)
{
test = 0;
_putchar('0');
}
else
{
test = -1;
_putchar('-');
}
return (test);
}
