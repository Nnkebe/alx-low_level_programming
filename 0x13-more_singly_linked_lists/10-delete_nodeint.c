#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node in a linked list at a certain index
 *
 * @head: This is a pointer to the 1st element in the list.
 *
 * @index: This is the index of the node to be deleted
 *
 * Return: 1 at success or -1 at fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curret =  NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	curret = temp->next;
	temp->next = curret->next;
	free(curret);

	return (1);
}
