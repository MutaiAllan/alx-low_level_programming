#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes.
 * @s: string to locate
 * @accept: string to check
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
