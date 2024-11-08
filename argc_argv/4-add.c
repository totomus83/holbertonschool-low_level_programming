#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of argument
 * @argv: string
 * Return: sum of argument if it cotains only digits
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int s;

	i = 1;
	j = 0;
	s = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		j = 0;
		s = s + atoi(argv[i]);
		i++;
	}
	printf("%d\n", s);
	return (0);
}
