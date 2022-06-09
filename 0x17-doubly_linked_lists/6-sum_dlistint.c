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

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
