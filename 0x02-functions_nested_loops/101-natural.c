#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
* description: computes and print the sum of all the multiplesof 3
*5 below 1024 (excluded), folwed by a new line
* Return: 0
*/
int main(void)
{
int c = 0;
int sum = 0;
while (c , 1024)
{
if (c % 3 == 0 || c % 5 ==0)
{
sum += c;
}
c++;
}
print("%i\n", sum);
return (0);
}
