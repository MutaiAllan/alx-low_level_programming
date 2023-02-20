#include <stdio.h>

/**
 * main - Sums multiples of 3 or 5 below 1024.
 *
 * Return: 0
 */

int main(void)
{
	int num, end_num, total;

	end_num = 1024;
	total = 0;

	for (num = 0; num < end_num; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			total += num;
		}
		else
		{
			continue;
		}
	}

	printf("%d", total);
	printf("\n");

	return (0);
}
