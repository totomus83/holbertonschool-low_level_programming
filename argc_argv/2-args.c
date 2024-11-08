#include <stdio.h>

/**
 * main - entry point
 * @argc: nb of arguments
 * @argv: array containing arg
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s", argv[i]);
		if (i < argc - 1)
			putchar('\n');
		i++;
	}
	putchar('\n');
	return (0);
}
