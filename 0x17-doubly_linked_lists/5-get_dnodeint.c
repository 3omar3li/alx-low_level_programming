#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 *	of a dlistint_t linked list
 * @head: the head of the doubly linked list
 * @index: the index of the node, starting from 0
 * Return: returns the nth node of a dlistint_t linked list,
 *	if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (iter_times == index)
				return (current);

			current = current->next;
			++iter_times;
		}
	}

	return (NULL);
}
