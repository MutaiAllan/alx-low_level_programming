#include <stdio.h>
#include "main.h"

/**
 * main - Prints numbers from 1 to 100.
 * Return: 0.
 */

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf(" Fizz");
		}
		else if (((i % 5) == 0) && ((i % 3) != 0))
		{
			printf(" Buzz");
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
