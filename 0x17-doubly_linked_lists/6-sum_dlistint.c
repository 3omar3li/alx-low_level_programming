#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 *	of a dlistint_t linked list
 * @head: the head of the doubly linked list
 * Return: the sum of all the data,
 *	if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
