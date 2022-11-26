#include "main.h"

/**
 * main - prints the number of argiments being passed
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
