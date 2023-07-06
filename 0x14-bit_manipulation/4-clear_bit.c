#include "main.h"

/**
 * clear_bit - set a bit at a position to 0
 * @n: number to be used
 * @index: position to be cleared
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
