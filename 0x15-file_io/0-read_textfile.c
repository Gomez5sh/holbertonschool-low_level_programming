#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints.
 * @filename: pointer.
 * @letters: variable.
 *
 * Return: Not return.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, *size, buff;
	ssize_t rd_file;

	size = malloc(sizeof(char) * letters);

	if (size == NULL)
		return (NULL);

		fd = open(filename, O_RDONLY);

		if (fd == -1 || filename == -1)
		{
			free(fd);
			return (0);
		}


		rd_file = read(fd, size, letters);
		if (rd_file == -1)
		{
			free(size);
			close(fd);
			return (0);
		}


		buff = write(STDOUT_FILENO, size, rd_file);
			{
				if (!buff)
				{
					free(size);
					return (0);
				}
			}

	close(fd);
	free(size);

	return (rd_file);
}
