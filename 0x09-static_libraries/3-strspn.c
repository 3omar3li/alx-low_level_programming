#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets  the length of a prefix substring
 * @s: parameter function
 * @accept: parameter function
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
