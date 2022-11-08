#include "main.h"

/**
 * puts2 - prints a character
 * @str: inputs string
 */
void puts2(char *str)
{
	int length;

	length = 0;

	for (length = 0; str[length] != '\0'; length++)
		_putchar(str[length]);

	_putchar('\n');
}
