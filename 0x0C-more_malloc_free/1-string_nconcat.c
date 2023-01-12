#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of the string
 * @str: string whose length is to be checked
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * string_nconcat - concatanates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to be concatanated
 *
 * Return: pointer to the allocated memory of the concatanated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int mem, len, x, y;

	mem = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (mem < 0)
		return (NULL);
	if (mem >= _strlen(s2))
		mem = _strlen(s2);
	len = _strlen(s2) + mem;

	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		ptr[x] = s1[x];
	for (y = 0; y < mem; y++)
		ptr[x + y] =  s2[y];
	ptr[x + y] = '\0';

	return (ptr);
}
