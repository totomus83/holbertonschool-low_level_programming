#include <stdio.h>

/**
 * main - return 0
 * @argc: count arguments
 * @argv: array containing arguments
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
			putchar(' ');
		i++;
	}
	printf("\n");
	return (0);
}
