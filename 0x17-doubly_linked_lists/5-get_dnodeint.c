#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node.
 * @head: beginning of a linked list.
 * @index: position of nth node.
 *
 * Return: if node absent, NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *newList;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	newList = head;
	if (index == 0)
		return (head);

	while (count < index)
	{
		if (newList->next == NULL)
			return (NULL);
		newList = newList->next;
		count++;
	}
	return (newList);
}
