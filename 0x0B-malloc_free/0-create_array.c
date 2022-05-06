#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars
* @size: size of an array
* @c: char to initialize array.
* Return: NULL
*/
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int i;
if (size == 0)
{
return (NULL);
}
buffer = malloc(sizeof(char) * size);
/* check if malloc was successful */
if (buffer == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
buffer[i] = c;
}
return (buffer);
}
