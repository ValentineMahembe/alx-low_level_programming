#include "main.h"

/**
 * is_prime_number - determine if an integer is a prime number
 *
 * @n: integer to be checked
 *
 * Return 1 if a prime number else return 0
 */
int is_prime_number(int n)
{
    int i;

    if (n <= 1)
        return (0);
    for (i = 2; i < n; i++)
        if (n % i == 0)
            return (0);
    return (1);
}
