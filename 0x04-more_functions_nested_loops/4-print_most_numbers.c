#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers from 0-9 except 2 and 4.
 * Return: Nothing.
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; ++i)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		putchar(i + '0');
	}
	putchar('\n');
}
