#include "lists.h"

/*
 * print_dlistint - function that prints all the elements of
 *	a double linked list
 * @h: address of the head node
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}
	return (i);
}
