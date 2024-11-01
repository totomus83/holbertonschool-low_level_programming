#include "main.h"

/**
 * _atoi - turn a string into an integer
 * @s: the string of integer that must be returned as a string
 * Return: return the value associated with the sign times the integer
 */


int _atoi(char *s)
{
	unsigned int num;
	int sign;

	num = 0;
	sign = 1;
	do {
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (*s == '-')
		{
			if (sign == -1)
				sign = 1;
			else
				sign = -1;
		}
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
