#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free the memory allcated
 * @head: pointer to the first node in the list
 * Return: void function
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
