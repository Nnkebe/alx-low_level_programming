#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a "\n".
 * @array: array
 * @size: how many elements to be printed
 * @action: The pointer to print in regular/hex
 *
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
