#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 *	you would need to flip to get from one number to another
 * @n: function parameter
 * @m: function parameter
 * Return: the flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip)
	{
		if (flip & 1)
		{
			count++;
		}
		flip >>= 1;
	}
	return (count);
}
