#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string lenght to be returned
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
