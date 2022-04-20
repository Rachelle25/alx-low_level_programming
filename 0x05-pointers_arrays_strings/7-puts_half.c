#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - prints a string, followed by a new line
* @str: pointer to the string to  print
* Return: void
*/
void puts_half(char *str)
{
int i, len, half;
len = strlen(str);
if (len % 2 == 0)
{
half = len / 2;
for (i = half; str[i] != '\0'; i++)
{
putchar(str[i]);
}
}
else
{
half = (len + 1) / 2;
for (i = half; str[i] != '\0'; i++)
{
putchar(str[i]);
}
}
putchar('\n');

