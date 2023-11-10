#include "lists.h"

/*
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: address of the head node
 * Return: size of list
*/

size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);
}
