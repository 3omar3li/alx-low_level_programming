#include "main.h"

/**
 * divide - function that divides
 * @n: function parameter
 * Return: void
 */

void divide(unsigned long int n)
{
	if (n < 1)
	{
		return;
	}

	divide(n >> 1);

	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}

/**
 * print_binary - function that prints the binary
 *	representation of a number
 * @n: function parameter
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	divide(n);
}
