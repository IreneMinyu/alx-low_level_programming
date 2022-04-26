#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a,
 * listint_t linked list.
 * @head: pointer to list.
 *
 * Return: sum of all the data (n) or 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = malloc(sizeof(listint_t));
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
