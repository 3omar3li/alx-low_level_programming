#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 *	index index of a listint_t linked list
 * @head: function parameter
 * @index: the index of the node that should be deleted.
 *	Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		count++;
	}

	return (-1);
}
