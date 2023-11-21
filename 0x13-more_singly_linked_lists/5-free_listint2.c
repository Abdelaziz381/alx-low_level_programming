#include "lists.h"

/**
 * free_listint2 - frees a list of ints
 * @head: pointer address to first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *temp_ptr;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		temp_ptr = node;
		node = node->next;
		free(temp_ptr);
	}
	*head = NULL;
}
