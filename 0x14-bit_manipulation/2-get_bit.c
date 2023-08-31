#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 *
 * @n: This is the number that is seached for.
 *
 * @index: This is the actual value of the bit to get.
 *
 * Return: The actaul value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
