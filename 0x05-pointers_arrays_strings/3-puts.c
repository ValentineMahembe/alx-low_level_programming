#include "main.h"

/**
 * _puts - puts a string then a new line
 * to stdout
 * @str: string to be processed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
