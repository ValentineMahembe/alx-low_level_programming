#include "main.h"

/**
 * create_file - create a file
 * @filename: a pointer to the name of the file
 * @text_content: Pointer to a string to write
 *
 * Return: -1 if the function fails
 * Otherwise 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		w = write(fd, text_content, strlen(text_content));
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
