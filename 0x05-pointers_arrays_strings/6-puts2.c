#include "main.h"
/**
 * puts2 - prints a character
 * @str: inputs string
 */
void puts2(char *str)
{
	int length, s;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (s = 0; s < length; s++)
	{
		_putchar(str[s]);
	}

	_putchar('\n');
}
