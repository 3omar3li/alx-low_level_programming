#include<stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * Return: 0 if c is digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
