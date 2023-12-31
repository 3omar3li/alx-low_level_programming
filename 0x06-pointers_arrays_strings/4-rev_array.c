#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter function
 * @n: parameter function - is the number of elements of the array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = n - 1; i > n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
