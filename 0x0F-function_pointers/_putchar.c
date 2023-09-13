#include <unistd.h>

/**
 * _putchar - wirtes the character c to stdout
 * @c: the character to print
 * Return: 0 (Success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
