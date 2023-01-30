#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @n: number of arguments
 * @separator: seperator between the nums
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int count;

	va_start(nums, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(nums, unsigned int));
		if (count < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
