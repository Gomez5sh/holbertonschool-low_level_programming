#include "holberton.h"

/**
 * create_file - Funtion to create a file.
 * @filename: pointer.
 * @text_content: pointer.
 * Return: 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wri, len = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (0);
	if (text_content == NULL)
		text_content = "";
	len = _strlen(text_content);

	wri = write(fd, text_content,len);

	if (wri == -1)
		return (-1);

	close(fd);

	return (-1);
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
