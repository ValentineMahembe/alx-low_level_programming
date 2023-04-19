#include "function_pointers.h"

/**
 * array_iterator - executes a function given a parameter
 * on each element of an array
 *
 * @array: array to execute
 * @size: size of array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
			action (array[i]);
	}
}
