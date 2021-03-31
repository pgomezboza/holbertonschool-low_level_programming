#include "holberton.h"

/**
 * create_file - create a function that creates a file.
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success or -1 on failure,
 * if filename is NULL return -1,
 * if text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, n = 0, output = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		while (text_content[n] != '\0')
			n++;
	}
	else
	{
		close(fd);
		return (1);
	}

	output = write(fd, text_content, n);

	if (output == -1 || output != n)
		return (-1);

	close(fd);
	return (1);
}
