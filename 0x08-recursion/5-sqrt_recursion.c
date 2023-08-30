#include "main.h"

/**
* _sqrt - function that calculates the natural sqrt of a number
* @n: parameter function
* @i: parameter function
* Return: the natural sqrt
*/

int _sqrt(int n, int i)
{
        int sqrt = i * i;

        if (sqrt > n)
        {
                return (-1);
        }
        if (sqrt == n)
        {
                return (i);
        }
        return (_sqrt(n, i + 1));
}

/**
* _sqrt_recursion - function that returns the natural sqrt of a number
* @n: parameter function
* Return: if n doesnt have a natural sqrt then return -1
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
