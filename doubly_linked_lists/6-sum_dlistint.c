#include "lists.h"

/**
 * sum_dlistint - get the sum of all integers in the list
 * @head: pointer to the start of the list
 * Return: integer variable that holds the result of the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int result;

	temp = head;
	result = 0;

	while (temp != NULL)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}
