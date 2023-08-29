#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: parameter function
 * @needle: parameter function
 * Return: pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
