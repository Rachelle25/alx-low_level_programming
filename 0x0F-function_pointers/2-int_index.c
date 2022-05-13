#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: array to search
* @size: size of te array
* @cmp: pointer to compare
*
* Return: index of the first element
* the cup function does not return0
* or size is negative
*/
int int_index(int *array, int size, int (*cmp) (int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
