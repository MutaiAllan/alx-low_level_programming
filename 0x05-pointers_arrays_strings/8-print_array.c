#include "main.h"
/**
 * print_array - prints n elements of the array
 *
 * @n: number of elements to be printed
 * @a: array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}

	printf("\n");
}
