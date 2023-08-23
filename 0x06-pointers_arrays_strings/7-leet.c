#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @ptr: parameter function
 * Return: ptr
*/

char *leet(char *ptr)
{
	int i = 0;
	int j = 0;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ptr[i] == a[j])
			{
				ptr[i] = b[j];
			}
		}
	}
	return (ptr);
}
