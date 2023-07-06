#include "main.h"

/**
 * get_bit - get the value of a bit at the given undex
 * @n: the number
 * @index: index starting from 0 to the bit required
 *
 * Return: The converted value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
