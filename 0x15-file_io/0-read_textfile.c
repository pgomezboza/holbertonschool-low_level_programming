#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @filename: name of the file to read.
 * @letters: number of letters to read and then print.
 *
 * Return: actual number of letters it could read and print,
 * if the file can not be opened or read, return 0,
 * if filename is NULL return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, reader = 0, output = 0;
	char *bf;

	if (filename == NULL)
		return (0);

	bf = malloc(letters);
	if (bf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(bf);
		return (0);
	}

	reader = read(fd, bf, letters);
	if (reader == -1)
	{
		free(bf);
		return (0);
	}

	output = write(STDOUT_FILENO, bf, reader);
	if (output == -1 || output != reader)
	{
		free(bf);
		return (0);
	}

	close(fd);
	free(bf);
	return (output);
}
