#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the node
 * @str: the string to add to the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tmp;
	unsigned int i;
	unsigned int count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (*head);
}
