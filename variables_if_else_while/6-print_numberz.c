#include <stdio.h>

/**
 * main - entry point
 * Return: if succes return 0
 */

int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
