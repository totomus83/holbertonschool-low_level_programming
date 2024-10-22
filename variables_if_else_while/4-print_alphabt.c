#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 if success
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		putchar(c);
		c++;
	}
	return (0);
}
