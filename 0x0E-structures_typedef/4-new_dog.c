#include <stdlib.h>
#include "dog.h"
/**
* copy - a copy argument
* @src: data to copy
* Return: pointer
*/
char *_copy(char *src)
{
char *ptr;
int i, len;
if (src == NULL)
{
return (NULL);
}
for (len = 0; src[len] != '\0'; len++)
;
ptr = malloc(sizeof(char) * (len + 1));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; src[i] != '\0'; i++)
{
ptr[i] = src[i];
}
ptr[i] = '\0';
return (ptr);
}

