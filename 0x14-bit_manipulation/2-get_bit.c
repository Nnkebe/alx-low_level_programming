#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: This is the number to be searched.
 *
 * @index: Index of a bit.
 *
 * Return: The actual value of a bit.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
