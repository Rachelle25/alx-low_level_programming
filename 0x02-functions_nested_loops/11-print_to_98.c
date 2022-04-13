#include <stdio.h>
#include "main.h"
/**
* print_to-98 - functions that prints all natural numbers from n to 98
* user input number prints to 98, regardless
* @n: number input
* Return: Always 0 (success)
*/
void print_to_98(int n)
{
while (n < 98)
{
printf("%i,", n);
n++;
}
while (n > 98)
{
printf("%i,", n);
n--;
}
printf("98");
putchar('\n');
}


