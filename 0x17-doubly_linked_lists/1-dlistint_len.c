#include "lists.h"
/**
 * print_dlistint - Prints all the nodes of linked list
 * @h: Is the pointer to node structure
 * Return: the amount of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
