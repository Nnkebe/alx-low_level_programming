#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list, returns head node data(n).
 *
 * @head: this is the pointer to the linked list.
 *
 * Return: This is the data inside the elements that was deleted
 *
 * or actually return a 0 if the list is empty.
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
