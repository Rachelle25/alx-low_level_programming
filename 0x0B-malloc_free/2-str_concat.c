#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - concatenates 2 strings
* @s1: first string
* @s2: string added to the end of the first string
*
* Return: pointer to newly allocated string
*/
char *str_concat(char *s1, char *s2)
{
unsigned int  size1 = 0, size2 = 0;
char *nest, *rest;
nest = s1;
if (s1)
while (*nest++)
size1++;
else
s1 = "";
nest = s2;
if (s2)
while (*nest++)
size2++;
else
s2 = "";
rest = malloc(size1 + size2 + 1);
if (!rest)
return (NULL);
nest = rest;
while (*s1)
*nest++ = *s1++;
while (*s2)
*nest++ = *s2++;
*nest = 0;
return (rest);
}

