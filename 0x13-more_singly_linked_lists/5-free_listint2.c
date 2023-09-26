#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *	The function sets the head to NULL
 * @head: function parameter
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
