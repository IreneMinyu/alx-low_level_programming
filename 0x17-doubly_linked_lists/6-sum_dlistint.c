#include "lists.h"
/**
 * sum_dlistint - function that finds sum of all data,
 * in a linked list.
 * @head: beginning of a linked list.
 *
 * Return: sum of all data of a linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *count;

	count = head;
	if (head == NULL)
		return (NULL);

	while (count != NULL)
	{
		sum += count->n;
		count = count->next;
	}

	return (sum);
}
