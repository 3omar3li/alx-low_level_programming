#include "main.h"

/**
 * print_sign - function to chech if n greater or equal or less than ZERO
 * @n: parameter to be checked
 * Return: 1 if the number grater than 0, 0 if the number equal 0 and -1 if the number less than 0
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
		return (-1);
	}
}
