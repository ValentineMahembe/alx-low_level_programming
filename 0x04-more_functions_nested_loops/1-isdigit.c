#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 * @c: characted to be checked
 * Return: 1 if c is a gigit, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
