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
	else return (_sqrt_recursion_helper(n, 1, n));
}

/**
 * _sqrt_recursion_helper - returns the square root on n
 *
 * @mid: mid point of the range between 1 and n
 * @n: number to be processed
 *
 * Return: square root of n
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid;

	if (end >= start)
	{
		mid = (start + end)  / 2;

		if (mid * mid == n)
			return (mid);

		if (mid * mid > n)
			return (_sqrt_recursion_helper(n, start, mid - 1));
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}

	return (-1);
}
