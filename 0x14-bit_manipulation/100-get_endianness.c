#include "main.h"

/**
 * get_endianness - checks if a machine is a big endian or not
 *
 * Return: 1 if little endian, 0 otherwise
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
