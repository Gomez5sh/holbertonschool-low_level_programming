#include "holberton.h"
/**
 *_strlen  - set the integer to 402
 * @s: a pointer the integer we want to set to 402
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * read_textfile - Reads a text file and prints.
 * @filename: pointer.
 * @letters: variable.
 * Return: Not return.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, buff, len, rd_file;
	char *size;

	if (filename == NULL)
		return (0);
	size = malloc(sizeof(char) * letters);
		if (!size)
		{
			free(size);
			return (0);
		}
	fd = open(filename, O_RDONLY);
		if (!fd)
			return (0);
	rd_file = read(fd, size, letters);
		if (rd_file == -1)
		{
			free(size);
			close(fd);
			close(rd_file);
			return (0);
		}
		len = _strlen(size);
		buff = write(STDOUT_FILENO, size, len);
			if (!buff)
			{
				free(size);
				return (0);
			}
	if (rd_file != buff)
		return (0);
	close(fd);
	free(size);
	return (rd_file);
}
