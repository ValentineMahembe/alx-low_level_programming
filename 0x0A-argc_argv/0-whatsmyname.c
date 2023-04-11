#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program's name and a new line
 * @argc: number of command line arguments
 * @argv: array containing the program's command line arguments
 * Return: success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return EXIT_SUCCESS;
}
