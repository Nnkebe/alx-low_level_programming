#include "main.h"

/**
 *  flip_bits - the function counted the number of bits to
 *  change to get the from one numer to another.
 *
 *  @n: This is the 1st number.
 *
 *  @m: This is the 2nd number.
 *
 *  Return: after return number of bits to be changed.
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
