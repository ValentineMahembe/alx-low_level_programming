#include <stdio.h>

/**
 * main - Entry point
 * Description: print the aplhabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
