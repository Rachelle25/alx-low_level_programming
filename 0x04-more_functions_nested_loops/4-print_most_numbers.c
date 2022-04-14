#include "main.h"
/**
* prints_most_numbers - prints the number from 0 to 9,
* excpet 2 and 4, follwed by a new line
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
