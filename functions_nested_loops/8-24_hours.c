#include "main.h"
/**
 * jack_bauer - function that prints the time from "00:00" to "23:59"
 */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	m = 0;
	while (h <= 23)
	{
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
		m = 0;
	}
}
