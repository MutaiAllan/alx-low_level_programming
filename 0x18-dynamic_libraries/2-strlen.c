#include "main.h"
/**
 * _strlen - gives the length of a string
 * @s: string to be evaluated
 * Return: length
 */

int _strlen(char *s)

{
	int n = 0;

	while (*s != '\0')

	{
		n++;
		s++;
	}
	return (n);
}
