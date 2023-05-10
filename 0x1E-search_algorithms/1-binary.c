#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted
 * array of integers using Binary Search algorithm.
 * @array: A pointer to teh first element of the array to search.
 * @size: The number of elements in teh array.
 * @value: The value in the array to search for.
 *
 * Return: Index of the value if it is present, -1 otherwise.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t count, left, right, mid;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (count = left; count <= right; count++)
			printf("%d, ", array[count]);
		printf("%d\n", array[count]);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
