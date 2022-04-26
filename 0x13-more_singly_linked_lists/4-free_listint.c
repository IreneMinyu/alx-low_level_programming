#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to a list.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *nextnode, *current;

	current = head;

	while (current)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}
}
