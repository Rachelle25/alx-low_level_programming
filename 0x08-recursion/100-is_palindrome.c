#include "main.h"
/**
* long_1 - check the code
* @s: number
*
* Return: Always 0
*/
int long_1(char *s)
{
if (*s != '\0')
{
return (1 + long_1(s + 1));
}
return (0);
}
/**
* compare - check the code
* @s: number
* @n: length
*
*
Return: Always 0.
*/
int compare(char *s, int n)
{
if (n <= 0)
{
return (1);
}
if (*s == *(s + (n - 1)))
{
return (compare(s + 1, n - 2));
}
else
{
return (0);
}
}
/**
* is_palindrome - check the code
* @s: chaacter
*
* Return: Always 0
*/
int is_palindrome(char *s)
{
int n;
n = long_1(s);
return (compare(s, n));
}
