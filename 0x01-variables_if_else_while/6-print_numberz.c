#include <stdio.h>
/**
* main - mqin block 
* Description: print single numbers in base 10
* starting from 0, follwed by a new line
* Return: 0
*/
int main(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
c++;
}
putchar('\n');
return(0);
}
