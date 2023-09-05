#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - function that returns pointer to a newly allocated space in memory
 * @str: parameter function
 * Return: NULL if str = NULL,
 *	On success returns pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
