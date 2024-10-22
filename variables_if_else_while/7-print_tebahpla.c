#include <stdio.h>

/**
 * main - entry point
 * Return: return 0 if success
 */

int main(void)
{
	int a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar ('\n');
	return (0);
}
