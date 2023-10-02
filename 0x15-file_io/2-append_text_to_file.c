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
 * append_text_to_file - function that appends text at the end of a file
 * @filename: function parameter
 *	the name of the file
 * @text_content: function parameter
 *	a NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure,
 *	if filename is NULL return -1
 *	if text_content is NULL do not add anything to the file
 *	Return 1 if the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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
