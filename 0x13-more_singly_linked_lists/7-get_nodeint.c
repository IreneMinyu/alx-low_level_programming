#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of,
 *  a listint_t linked list.
 * @head: pointer to the list.
 * @index: index of node.
 *
 * Return: the nth node or NULL if node doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *list;
	unsigned int counter = 0;

	list = head;

	while (list)
	{
		count++;
		list = list->next;
	}
	list = head;
	if (index > count - 1)
	{
		return (NULL);
	}

	else
		while (counter != index)
		{
			counter++;
			list = list->next;
		}

	return (list);
}
