#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked listint_t list
 * @h: function parameter
 * Return: length
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
