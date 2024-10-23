#include "main.h"

/**
 *_isalpha - test if variable c is undercase
 *@c: character to be verified
 * Return: if succes return 1, if not return 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
