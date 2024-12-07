#include "lists.h"

/**
 * get_dnodeint_at_index - get the index number of node
 * @head: pointer to the start of the list
 * @index: position in the list
 * Return: the index node or null if index node not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (i < index)
	{
		return (NULL);
	}
	return (temp);
}
