#include <stdio.h>

/**
 * Main - Entry point
 * Description: Print the alphabet in lowercase
 * Return: 0 (sucess)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
