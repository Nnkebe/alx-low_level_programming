#include "main.h"

/**
 * flip_bits - Function returns the number of bits you would need to flip...
 * to get from one number to another.
 *
 * @n: This is the actual 1st number.
 *
 * @m: This is the actual 2nd number.
 *
 * Return: The actual number of bits to be charged.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
