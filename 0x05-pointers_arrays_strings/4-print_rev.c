#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_rev - print reversed string, followed by a new line
* @s: pointer to the string to print
* Return: void
*/
void print_rev(char *s)
{
int count = 0;
while (*s != '\0')
{
s++;
count++;
}
while (count > 0)
{
s--;
putchar(*s);
count--;
}
putchar('\n');
}

