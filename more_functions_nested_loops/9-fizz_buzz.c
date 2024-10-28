#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if success
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		if (i < 100)
			putchar(' ');
		i++;
	}
	return (0);
}
