#include "main.h"
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space
*@str: pointer to as string
*@size: size of the string
*
*Return: NULL
*/
char *_strdup(char *str)
{
char *buffer;
unsigned int len, i;
/* check if str is null*/
if (str == NULL)
{
return (NULL);
}
len = 0;
while (str[len] != '\0')
{
len++;
}
buffer = malloc(sizeof(char) * (len + 1));
/*check if malloc was successful*/
if (buffer == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
buffer[i] = str[i];
}
buffer[len] = '\0';
return (buffer);
}
