#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the number, from 0-14.
 * Return: Nothing.
 */

void more_numbers(void)
{
	int count = 1;

	while (count <= 10)
	{
		int i = 0;

		for (; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		count++;
		_putchar('\n');
	}
}
