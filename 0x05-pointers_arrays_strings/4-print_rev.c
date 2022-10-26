#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int n = 0;
	int y;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (y = n; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
