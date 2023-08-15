#include "main.h"

/**
 * _abs - function to check for the absolute value
 * @i: parameter to be checked
 * Return: -i for the not absolute value and i for the absolute value
*/

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else if (i >= 0)
	{
		return (i);
	}
	return (0);
}
