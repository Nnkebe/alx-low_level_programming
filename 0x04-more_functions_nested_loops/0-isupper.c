#include "main.h"

/**
 * _isupper - checks if a letter is an uppercase
 * @c: character to be checked
 *
 * Return: 1 if upper letter, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
