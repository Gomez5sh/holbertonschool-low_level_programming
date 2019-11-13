#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer.
 * @text_content: pointer to bytes.
 *
 * Return: 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writ;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		return (close(fd) == -1 ? -1 : 1);
	}

	writ = write(fd, text_content, _strlen(text_content));

	if (writ == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}

/**
 *_strlen  - set the integer to 402
 * @s: a pointer the integer we want to set to 402
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
