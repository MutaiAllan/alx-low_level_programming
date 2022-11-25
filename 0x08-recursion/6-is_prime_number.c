#include "main.h"

/**
 * check - checks if number is prime
 * @x: divider
 * @y: number to be checked if even
 * Return: 0, 1, recursive function
 */

int check(int x, int y)
{
	if (x < y && y % x == 0)
		return (0);
	else
		return (check(x + 1, y));

	return (1);
}
/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 * Return: 0, recursive function
 */

int is_prime_number(int n)
{
	if (n == 1 || n == 2)
		return (0);

	return (check(2, n));
}

