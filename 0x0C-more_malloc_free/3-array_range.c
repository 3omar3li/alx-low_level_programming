#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: function parameter
 * @max: function parameter
 * Return: the pointer to the newly created array
 *	If min > max, return NULL
 *	If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i;
	int range;
	int *ptr;

	range = 0;

	if (min > max)
	{
		return (NULL);
	}
	range = ((max + 1) - min);

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
