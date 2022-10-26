#include "main.h"

/**
 * swap_int - swaps two number
 * @a: input for first number
 * @b: input for second number
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
