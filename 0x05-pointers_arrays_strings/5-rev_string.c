#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be processed
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (int i = 0; i < len / 2; i++)
	{
		temp = *(s + 1);
		*(s + 1) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
	}
}
