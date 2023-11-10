#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a doubly linked list
 * @h: the double linked list to count
 * Return: number of elements in the doubly linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		++i;
		h = h->next;
	}

	return (i);
}
