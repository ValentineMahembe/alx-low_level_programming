#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be processed
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + 1));
	}
	_putchar('\n');
}
