#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 *
 * @s: string to be processed
 *
 * Return: lenght of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
