#include "main.h"
#include <stdlib.h>

/**
 * create_array - the arrays of characters and
 * initiate the character.
 * @size: size of the array.
 * @c: int value to initiate.
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
