#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: amount of bytes
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y = 0, z = 0;

	while (dest[z] != '\0')
	{
		z++;
	}

	while (y < n && src[y] != '\0')
	{
		dest[z] = src[y];
		y++;
		z++;
	}
	dest[z] = '\0';
}
