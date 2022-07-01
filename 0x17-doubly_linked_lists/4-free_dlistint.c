#include "lists.h"
/**
 * free_dlistint - free the linked lost.
 * @head: pointer to the start of the list.
 *
 * Return: NULL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
