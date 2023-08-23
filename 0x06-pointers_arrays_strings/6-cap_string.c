#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @ptr: parameter function
 * Return: ptr
*/

char *cap_string(char *ptr)
{
	int i = 0;

	while (ptr[++i])
	{
		while (!(ptr[i] >= 'a' && ptr[i] <= 'z'))
		{
			i++;
		}
		if (ptr[i - 1] == ' ' ||
				ptr[i - 1] == '\t' ||
				ptr[i - 1] == '\n' ||
				ptr[i - 1] == ',' ||
				ptr[i - 1] == ';' ||
				ptr[i - 1] == '.' ||
				ptr[i - 1] == '!' ||
				ptr[i - 1] == '?' ||
				ptr[i - 1] == '"' ||
				ptr[i - 1] == '(' ||
				ptr[i - 1] == ')' ||
				ptr[i - 1] == '{' ||
				ptr[i - 1] == '}')
		{
			ptr[i] -= ' ';
		}
	}
	return (ptr);
}
