#include "main.h"

/**
 * _isupper - prints if a character is uppercase or lowercase
 * @c: character to be checked
 * Return: 1 if character is uppercase and 0 if character is lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
