#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all the argumenst being passed
 * @n: The number of parameters to sum
 * @...: A variable number of parameters to sum
 *
 * Return: sum of all parameters, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;
	unsigned int index, sum = 0;

	if (n == 0)
		return (0);

	va_start(my_list, n);

	for (index = 0; index < n; index++)
		sum += va_arg(my_list, int);

	va_end(my_list);

	return (sum);
}
