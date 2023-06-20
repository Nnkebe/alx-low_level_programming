#include "main.h"

/**
 * _abs - computes the absolute value of an int
 * @c: the num to be copmuted
 * Return: Absolute value of the num 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
