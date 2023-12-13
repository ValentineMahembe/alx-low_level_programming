#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located,
 * or -1 if value is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, j;

	if (!array)
		return (-1);

	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
			for (j = i - jump; j <= i; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}

	if (i >= size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
		for (j = i - jump; j < size; j++)
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			if (array[j] == value)
				return (j);
		}
	}

	return (-1);
}
