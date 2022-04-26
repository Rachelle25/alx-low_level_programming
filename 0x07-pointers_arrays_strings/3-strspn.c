#include "main.h"
/**
* _strspn - gets the length of a prefix subdstring
* @s: string
* @accept: contains bytes that may or may not compose the strings
*
* Return: the number of bytesthat compose the length
*/
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
unsigned int length;
length = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++);
if (s[i] == accept[j])
length++;
if (accept[j] == '\0')
return (length);
}
return (length);
}
return (length);
}
