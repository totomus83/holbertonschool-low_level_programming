#include "main.h"

/**
 *_islower - test if variable c is undercase
 *@c: character to be verified
 * Return: if succes return 1, if not return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
