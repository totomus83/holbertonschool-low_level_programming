#include "lists.h"

/**
 * dlistint_len - count the length od the list
 * @h: pointer to the list
 * Return: return the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
