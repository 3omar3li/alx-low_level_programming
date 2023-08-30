#include "main.h"

/**
* check_prime - function that checks if the number is prime
* @n: parameter function
* @i: parameter function
* Return: 1 if prime, 0 otherwise
*/

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}

/**
* is_prime_number - function that returns 1 if prime, otherwise returns 0
* @n: parameter function
* Return: 1 if the input integer is prime, otherwise return 0
*/

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
