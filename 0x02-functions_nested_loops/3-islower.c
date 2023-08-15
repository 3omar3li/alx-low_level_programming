#include "main.h"

/**
 * _islower - function to check for the lowercase characters
 * @c: parameter to be checked
 * Return: 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
