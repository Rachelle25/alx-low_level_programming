#include "main.h"
/**
* _strchr - Locates a character in a string
* @s: string
* @c: character to search
* Return: Always 0 (success)
*/
char *_strchr(char *s, char c)
{
int k = 0;
for (; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (&s[k]);
}
return (0);
}
