#include <stdio.h>

/**
 * main - entry point
 * Return: return 0 if success
 */

int main(void)
{
	char a;
	char b;

	a = 0;
	while (a <= 9)
	{
		putchar (a + '0');
		a++;
	}
	b = 'a';
	while (b <= 'f')
	{
		putchar (b);
		b++;
	}
	putchar('\n');
	return (0);
}
