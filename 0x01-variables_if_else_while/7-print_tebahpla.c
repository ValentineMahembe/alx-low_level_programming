#include <stdio.h>

/**
 * main - Entry point
 * Description: print number 0 to 9
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; --c)
	putchar(c);
	putchar('\n');
	return (0);
}
