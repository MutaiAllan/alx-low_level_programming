#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 * @array: A pointer to the first elemet of the array to search
 * @size: The number of elements in an array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
	}
	return (-1);
}
