#include <stdio.h>

int main (int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf ("%s ", argv[i]);
		i++;
	}
	return (0);
}
