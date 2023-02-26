#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 ata agiven index.
 * @n: number to check.
 * @index: Position to set value.
 *
 * Return: 1 if works, -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
