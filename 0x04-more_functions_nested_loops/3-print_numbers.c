#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0-9
 * Return: 0
 */

void print_numbers(void)
{
	int n = 0;

	for (n >= 0; n <= 9; n++)
	{
		putchar(n);
		putchar("\n");
	}
}
