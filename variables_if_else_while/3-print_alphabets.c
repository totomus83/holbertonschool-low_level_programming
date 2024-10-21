#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 if success
 */
int main(void)
{
	char c;
	char d;

	c = 'a';
	while (c <= 'z')
		{
		putchar(c);
		c++;
		}
	d = 'A';
	while (d <= 'Z')
	{
	putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}
