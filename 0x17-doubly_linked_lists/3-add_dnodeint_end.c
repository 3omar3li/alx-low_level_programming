#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 *	at the end of a dlistint_t list
 * @head: the head of the doubly linked list
 * @n: the number to place in the new node
 * Return: the address of the new element,
 *	or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
		return (new_node);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
