#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring
 * @s: The input
 * @accept: The input
 *
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	signed int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
