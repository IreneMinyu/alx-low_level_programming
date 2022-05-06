#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the beginning of a,
 * listint_t list.
 * @head: pointer to pointer of list.
 * @n: value to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *endnode;

	newnode = malloc(sizeof(listint_t));
	endnode = *head;

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = NULL;
	}

	if (endnode == NULL)
	{
		*head = newnode;
	}

	else
	{
		while (endnode->next != NULL)
			endnode = endnode->next;
		endnode->next = newnode;
	}

	return (newnode);
}
