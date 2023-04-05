#include "main.h"

/**
 * _sqrt_recursion - return th square root of a number
 *
 * @n: number to be processed
 *
 * Return: -1 if n doesnt have any square root, square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else return (_sqrt_recursion(n / 2) * 2 == n ? _sqrt_recursion(n / 2) : -1);
}
