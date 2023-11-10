#include "lists.h"

/**
 * delete_first_dnode - function thats remove the first node
 *	of a doubly linked list
 * @head: the head of the doubly linked list
 * Return: 1 if is deleted
*/

int delete_first_dnode(dlistint_t **head)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;

	temp = current;
	if (current->next)
	{
		current = current->next;
		current->prev = temp->prev;
		*head = current;
	}
	else
	{
		*head = NULL;
	}
	free(temp);
	return (1);
}

/**
 * get_dnodeint_at_index - function thats get a node from a doubly linked list
 * @head: the head of the doubly linked list
 * @index: the index to find in the doubly linked list
 * Return: the specific node of the doubly linked list
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
			{
				return (current);
			}
			current = current->next;
			++iter_times;
		}
	}
	return (NULL);
}

/**
 * dlistint_len - function thats count the number of elements
 *	in a doubly linked list
 * @h: the double linked list to count
 * Return: number of elements in the doubly linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}
	return (lenght);
}

/**
 * delete_dnodeint_at_index - function that deletes the node at
 *	index index of a dlistint_t linked list
 * @head: the head of the doubly linked list
 * @index: the index of the node that should be deleted.
 *	Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	dlistint_t *temp = NULL;
	unsigned int length = 0;

	if (head && *head)
	{
		length = dlistint_len(*head);
		if (index > length)
		{
			return (-1);
		}
		if (index == 0)
		{
			return (delete_first_dnode(head));
		}
		current = get_dnodeint_at_index(*head, index);
		if (current)
		{
			temp = current;
			if (length - 1 == index)
			{
				current->prev->next = current->next;
			}
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			free(temp);
			return (1);
		}
	}
	return (-1);
}
