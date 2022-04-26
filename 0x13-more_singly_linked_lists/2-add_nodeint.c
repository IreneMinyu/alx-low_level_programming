#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a,
 * listint_t list.
 * @head: pointer to pointer of list.
 * @n: value to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	/*add to the head node*/
	if (newnode == NULL)
		return (NULL);

	while (newnode)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
