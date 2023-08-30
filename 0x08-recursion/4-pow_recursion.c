#include "main.h"

/**
* _pow_recursion - function that returns the value of x raised to power of y
* @x: parameter function
* @y: parameter function
* Return: if y is lower than 0 return -1
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
