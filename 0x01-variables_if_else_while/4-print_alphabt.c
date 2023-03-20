#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet except e and q
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
