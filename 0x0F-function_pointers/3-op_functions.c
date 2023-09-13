#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function that sums two integers
 * @a: function parameter
 * @b: function parameter
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub: function that subs two integers
 * @a: function parameter
 * @b: function parameter
 * Return: returns the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiples two integers
 * @a: function parameter
 * @b: function parameter
 * Return: returns the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: function parameter
 * @b: function parameter
 * Return: returns the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: b must not be equal 0\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that modules two integers
 * @a: function parameter
 * @b: function parameter
 * Return: returns the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: b must not be equal 0\n");
		exit(100);
	}
	return (a % b);
}
