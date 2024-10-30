#include "main.h"


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
}
