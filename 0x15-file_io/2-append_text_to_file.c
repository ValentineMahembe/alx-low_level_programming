#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return: -1, if the function fails of filename is NULL
 * 1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "a");
	if (fp == NULL)
		return (-1);
	if (text_content != NULL)
		fprintf(fp, "%s", text_content);
	fclose(fp);
	return (1);
}
