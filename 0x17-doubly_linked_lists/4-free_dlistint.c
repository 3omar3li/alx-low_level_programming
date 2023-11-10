#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: the head of the doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
