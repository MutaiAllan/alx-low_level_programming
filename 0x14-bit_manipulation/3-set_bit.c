#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 ata agiven position.
 * @n: number to set.
 * @index: position to set bit.
 *
 * Return: 1 if successful, -1 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
