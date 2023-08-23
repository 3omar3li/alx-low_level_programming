#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @ptr: parameter function
 * Return: ptr
*/

char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i++])
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] -= ' ';
		}
	}
	return (ptr);
}
