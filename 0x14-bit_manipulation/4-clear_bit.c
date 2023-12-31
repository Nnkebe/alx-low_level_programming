#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: This is the pointer to the number to be changed.
 *
 * @index: This is the index of the bit to be cleared.
 *
 * Return: 1 if successful and -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
