#include <stdio.h>

/**
 * main - entry point
 * Return: return 0 if success
 */

int main(void)
{
	char a;

	a = 0;
	while (a <= 9)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
