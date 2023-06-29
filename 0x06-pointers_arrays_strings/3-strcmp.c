#include "main.h"

/**
 * _strcmp - compares the pointers to 2 strings
 * @s1: this is a pointer to the 1st string to be compared
 * @s2: this is a pointer to the 2nd string to be compared
 *
 * Return: if Str1 <  str2, the -tive difference of the 1st unmatched char.
 * if str1 == str2, 0
 * if str1 > str2, the +tive difference of the 1st unmatched char
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
