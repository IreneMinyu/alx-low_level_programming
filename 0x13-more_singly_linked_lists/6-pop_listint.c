#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a,
 * listint_t linked lis
 * @head: pointer of pointer in a list.
 *
 * Return: he head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *headnode;
	int data;

	if (*head == NULL)
		return (0);

	else
		data = (*head)->n;
	headnode = (*head)->next;
	free(*head);

	*head = headnode;

	return (data);
}
