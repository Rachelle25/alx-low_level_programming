#include "main.h"
/**
* _strcmp - compares two strings
* @s1: A pointer to a character changed
* @s2: A pointer to a character changed
* Return: dest
*/
int _strcmp(char *a1, char *s2)
{
char *str_one = s1;
char *str_two = s2;
while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
{
str-one++;
str_two++;
}
return (*str_one - *str_two);
}
