#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints.
 * @filename: pointer.
 * @letters: variable.
 * Return: Not return.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, buff, rd_file;
	char *size;

	if (filename == NULL)
		return (0);
	size = malloc(sizeof(char) + letters);
	if (!size)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd_file = read(fd, size, letters);
	if (rd_file == -1)
	{
		free(size);
		return (0);
	}
	buff = write(STDOUT_FILENO, size, rd_file);
	if (buff == -1)
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
