#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i = 0, j = 0;

	char *a = "aAbBcCdD";
	char *b = "11223344";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}

