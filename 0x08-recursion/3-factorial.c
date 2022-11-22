#include "main.h"

/**
 *factorial - returns the factorial of a number
 *@n: number whose factorial is to be returned
 *Return: fact
 */

int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}
	else
		fact = n * factorial(n - 1);
	return (fact);
}
