#include "lists.h"
#include <string.h>

/**
 * free_list - function that frees a list_t list
 * @head: head of the node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free (temp->str);
		free (temp);
	}
	free (head);
}
