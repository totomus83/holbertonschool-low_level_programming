5)



#include "holberton.h"

/**
 * string_toupper - Write a function that changes all lowercase letters
 * @hi: input string
 * Return: lowercase changed to uppercase
*/

char *string_toupper(char *hi)

{

	int i = 0;

	int d = 'a' - 'A';



	while (hi[i] != '\0')

	{

		if (hi[i] >= 'a' && hi[i] <= 'z')

		{

			hi[i = hi[i] - d;

		}
		i++;
	}

	return (hi);
}


