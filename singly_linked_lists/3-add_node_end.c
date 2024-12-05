#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - make the last node point to a new node
 * @head: double pointer to the start of the list
 * @str: string
 * Return: return node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tail;
	size_t length;

	length = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	while (str[length])
		length++;
	node->len = length;
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = NULL;
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = node;
	}
	return (node);
}
