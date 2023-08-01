#include "lists.h"

/**
 * add_nodeint - This adds a new node at the start of a linked list.
 *
 * @head: This is a pointer to the 1st node in a linked list.
 *
 * @n: Data to insert in the new node.
 *
 * Return: A pointer to the new node, or else NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
