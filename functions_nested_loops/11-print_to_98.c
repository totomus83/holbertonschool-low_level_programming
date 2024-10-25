#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - start at n and prints up or down to "98"
 *@n: starting number
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n--;
	}
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n++;
	}
	printf("\n");
}
