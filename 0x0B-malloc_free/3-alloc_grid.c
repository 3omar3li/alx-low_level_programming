#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - function that return pointer to 2 dimensional array of integers
 * @width: parameter function
 * @height: parameter function
 * Return: NULL on failure, if width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);

		if (output[i] == NULL)
		{
			free(output);
			for (j = 0; j <= height; j++)
				free(output);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			output[i][j] = 0;
	}
	return (output);
}
