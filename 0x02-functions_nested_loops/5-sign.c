#include "main.h"

/**
 * print_sign - function to chech if n greater or equal or less than ZERO
 * @n: parameter to be checked
 * Return: 0 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
