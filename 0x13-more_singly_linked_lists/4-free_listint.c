#include "lists.h"

/**
 * free_listint - This actually frees a linked list.
 *
 * @head: The listint_t list be freed
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
