#include "holberton.h"

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd = 0, n = 0, output = 0;

	if (filename != NULL)
		fd = open(filename, O_WRONLY | O_APPEND);
	else
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[n] != '\0')
			n++;
	}
	else
		return (1);

	output = write(fd, text_content, n);

	if (output == -1)
		return (-1);

	close(fd);
	return (1);
}
