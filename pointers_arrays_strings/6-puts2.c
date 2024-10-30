#include "main.h"

/**
 * puts2 - print 1 character out of 2
 *@str: string
 */
void puts2(char *str)
{
	int lengths;

	lengths = 0;
	while (str[lengths] != '\0')
	{
		if (lengths % 2 == 0)
		{
			_putchar(str[lengths]);
			lengths++;
		}
		else
			lengths++;
	}
	_putchar('\n');
}
