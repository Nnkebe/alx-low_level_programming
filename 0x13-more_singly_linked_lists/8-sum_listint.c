#include "lists.h"

/**
 * sum_listint -  returns sum of all the data (n) of a listint_t linked list.
 *
 * @head: This is the  1st node in the linked list.
 *
 * Return: The actual summation
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

