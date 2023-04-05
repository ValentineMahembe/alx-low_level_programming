#include "main.h"

/**
 * factorial - calculate the factorial of a number
 *
 * @n: number whose factorial is calculated
 *
 * Return: -1 for an error, 1 if n =0 & factorial if successful
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
