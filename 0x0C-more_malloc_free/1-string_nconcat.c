#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concats 2 strings
 * @s1: string source
 * @s2: string destination
 * @n: number of bytes
 *
 * Return: NULL if function fails
 * else return pointer tonewly allocated space in memory
 */
char *string_nconcat(char *s1, char *s, unsigned int n)
{
	char *new_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = strlen(s1);
	j = strlen(s2);

	if (n >= j)
		n = j;

	new_str = malloc(sizeof(char) * (i + n + 1));

	if (new_str == NULL)
        	return (NULL);

    	for (i = 0; s1[i] != '\0'; i++)
        	new_str[i] = s1[i];

	for (j = 0; j < n; j++)
        	new_str[i + j] = s2[j];
	new_str[i + j] = '\0';

	return (new_str);
}
