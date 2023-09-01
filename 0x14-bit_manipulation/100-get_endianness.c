#include "main.h"

/**
 * get_endianness - This fuction checks the endianness
 * endianness - (Endianness is a term that describes the order...
 * in which a sequence of bytes is stored in computer memory.)
 *
 * Return: 0 if its big and 1 on small.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
