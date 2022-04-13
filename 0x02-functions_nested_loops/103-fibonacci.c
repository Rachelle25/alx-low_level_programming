#include <stdio.h>
/**
* main - main block
* Description: computes and prints even number < 400000
* 5 below 1024 (excluded), followed by a new line
* Return: 0
*/
int main(void)
{
int a = 0, b = 1, next = 0;
int sum = 0;
while (next < 4000000)
{
next = a +b;
a = b;
if (next % 2 == 0)
sum += next;
}
printf("%i\n", sum);
return (0);
}
