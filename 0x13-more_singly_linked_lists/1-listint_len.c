#include "lists.h"

/**
 * listint_len - This returns a certain number of elements in a linked list.
 *
 * @h: This is a linked list of type listint_t to be traverse
 *
 * Return: This returns the actual number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)

	{
		num++;
		h = h->next;
	}

	return (num);
}
