#include "main.h"

/**
 * main - Prints the product of two numbers being passed as arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	product = x * y;
	printf("%d\n", product);

	return (0);
}
