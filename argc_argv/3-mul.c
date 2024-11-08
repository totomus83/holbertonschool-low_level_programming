#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of argument
 * @argv: string
 * Return: 1 if arguments are below 3, if else multiply them
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
