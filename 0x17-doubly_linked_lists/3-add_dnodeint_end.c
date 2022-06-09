#include "lists.h"
/**
 * add_dnodeint_end - Add node at the end of a list.
 * @head: Is the pointer to the direction of the head
 * @n:The data integer
 * Return: The address of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *endPointer;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	/** newNode->prev = NULL;**/

	if (*head == NULL)
		*head = newNode;
	newNode->prev = NULL;
	return (newNode);

	endPointer = *head;

	while (endPointer->next != NULL)
		endPointer = endPointer->next;

	endPointer->next = newNode;
	newNode->prev = endPointer;

	return (newNode);
}
