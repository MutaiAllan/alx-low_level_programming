#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 *
 * @b: memory size to allocate
 * Return: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
