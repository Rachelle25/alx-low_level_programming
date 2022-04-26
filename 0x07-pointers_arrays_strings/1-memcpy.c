
#include "main.h"
/**
* _memcpy - a function that copies memory lane
* @dest: memeory where is stored
* @src: memory where its copied
* @n: number of bytes
* 
* Return: copied memory with n byte changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = 0;
while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
return (dest);
}
