#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: pointer to the function to be usedto compare values.
 *
 * Return: Index of the first element for which the cmp
 * function does not return 0. -1 if no elements match
 * or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
