#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: parameter function
 * @src: parameter function
 * @n: parameter function
 * Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i = 0;

	while (dest[i++])
	{
		destlen++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[destlen++] = src[i];
	}
	return (dest);
}
