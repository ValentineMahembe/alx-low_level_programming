#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: print the last digit
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	printf("Last digit of %d is %d and is ", n, l);
	if (l > 5)
		printf("greater than 5\n");
	else if (l == 0)
		printf("0\n");
	else
		printf("less than 6 but not 0\n");
	return (0);
}
