#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: function parameter
 * @size: function parameter
 * Return: returns a pointer to the allocated memory
 *	The memory is set to zero
 *	If nmemb or size is 0, then _calloc returns NULL
 *	If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
