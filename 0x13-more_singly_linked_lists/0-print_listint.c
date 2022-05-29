#include "lists.h"
/**
* print_listint - prints all elements of a list
* @h: head of a list
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;
	while (h != NULL)
	{
		Printf("%d\n", h->n);
		h = h->next;
		numb++;
	}
	return (numb);
}
