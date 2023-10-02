#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 * Return: integer length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - function that creates a file
 * @filename: function parameter
 *	the name of the file to create
 * @text_content: function parameter
 *	a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure,
 *	if filename is NULL return -1
 *	if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (len)
	{
		bytes = write(fd, text_content, len);
	}

	close(fd);

	return (bytes == len ? 1 : -1);
}
