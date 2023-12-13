#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located,
 * or -1 if value is not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	int res;

	if (!array)
		return (-1);

	if (size == 1 && array[0] != value)
		return (-1);

	mid = (size - 1) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
	{
		res = binary_search(array + mid + 1, size - mid - 1, value);
		if (res == -1)
			return (-1);
		else
			return (mid + 1 + res);
	}
	else
		return (binary_search(array, mid + 1, value));
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located,
 * or -1 if value is not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	i = 1;
	if (!array)
		return (-1);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			i / 2, i < size ? i : size - 1);
	return (binary_search(array + i / 2, i < size ?
			i / 2 + 1 : size - i / 2, value));
}
