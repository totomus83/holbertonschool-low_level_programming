#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - free list_t
 * @head: pointer to list_t
 * return: void function, return nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
