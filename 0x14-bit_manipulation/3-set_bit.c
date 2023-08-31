#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 *
 * @n: The n is a pointer to the the number that will be changed.
 *
 * @index: There index of the bit that will be set to 1.
 *
 * Return: 1 if successful and -1 on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
