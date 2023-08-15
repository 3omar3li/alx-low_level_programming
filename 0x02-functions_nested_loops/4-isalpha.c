#include "main.h"

/**
 * _isalpha - function to check for the alphabets
 * @c: parameter to be checked
 * Return: 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
