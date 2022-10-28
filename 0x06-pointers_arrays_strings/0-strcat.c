#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: Destination of the string
 * @src: source of the string
 * Return: the pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int y = 0, x = 0;

	while (dest[y] != '\0')
		y++;
	while (src[x] != '\0')
	{
		dest[y] = src[x];
		y++;
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
