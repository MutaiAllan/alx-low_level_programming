#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
