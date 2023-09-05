#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - function that creates an array of chars
 * @size: parameter function
 * @c: parameter function
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
