#include <stdio.h>
#include <stdlib.h>
/**
* main -main point
* Description: prints in base 10
* starting from 0,follwed by a new line.
* Return: Always 0 (success)
*/
int main(void)
[
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
