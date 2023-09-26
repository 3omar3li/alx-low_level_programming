#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 *	of a listint_t linked list
 * @head: function parameter
 * @index: function parameter
 *	where index is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
