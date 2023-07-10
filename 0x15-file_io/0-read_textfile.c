#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: A pointer to the name of the file
 * @letters: The number of letters the function should read and print
 * Return: 0 if the function fails or filename is NULL
 * 0/w - the actual number of bytes the function can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
		return (0);
	close(fd);
	free(buffer);
	return (w);
}
