#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase letters
 * @hi: input string
 * Return: lowercase changed to uppercase
*/

char *string_toupper(char *hi)

{

	int i = 0;

	while (hi[i] != '\0')

	{

		if (hi[i] >= 'a' && hi[i] <= 'z')

		{
			hi[i] = hi[i] - 32;

		}
		i++;
	}

	return (hi);
}


