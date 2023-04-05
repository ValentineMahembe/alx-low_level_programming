#include "main.h"

/**
 * _pow_recursion - retuns the value of x raised to the power y
 *
 * @x: number to be raised to a power y
 * @y: power x is to be raised to
 *
 * Return: -1 if y < 0 else return the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1);
}
