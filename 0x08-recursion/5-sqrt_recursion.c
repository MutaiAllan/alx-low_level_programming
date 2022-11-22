#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 * @x: number to detaermine if n has a natural square root
 * @y: number to be squared
 * Return: natural square root, -1 if there is no natural square root
 */

int _sqrt(int x, int y)
{
	int sqr;

	sqr = y * y;

	if (sqr == x)
		return (y);
	else if (sqr < x)
		return (_sqrt(x, y + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number whose square root is to be returned
 * Return: natural square root or -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
        return (_sqrt(n, 1));
}

