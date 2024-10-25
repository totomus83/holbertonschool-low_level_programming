#include "main.h"
/**
 * times_table - function printing the tables
 *
 */
void times_table(void)
{
	int num;
	int mul;

	num = 0;
	mul = 0;
	while (num <= 9)
	{
		while (mul <= 9)
		{
			if ((num * mul) > 9)
			{
				_putchar(' ');
				_putchar(((num * mul) / 10) + '0');
				_putchar(((num * mul) % 10) + '0');
				if (mul < 9)
					_putchar(',');
			}
			else if ((num * mul) < 10)
			{
				if(mul != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((num * mul) + '0');
				if (mul < 9)
					_putchar(',');
			}
			mul++;
		}
		num++;
		_putchar('\n');
		mul = 0;
	}
}
