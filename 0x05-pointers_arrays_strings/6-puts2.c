#include "main.h"

/**
 * puts2 - prints a character
 * @str: inputs string
 */
void puts2(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
		length++;
	}

	_putchar('\n');
}
