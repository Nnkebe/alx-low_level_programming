#include "main.h"

/**
 * _isupper - checks if a letter is an upper case
 * @c: character to be checked
 *
 * Return: 1 upper case letter or 0 for anything else
 */

int _isupper(int c);
{
	if (c >= "A" && c <= "Z")
		return (1);
	else
		return (0);
}
