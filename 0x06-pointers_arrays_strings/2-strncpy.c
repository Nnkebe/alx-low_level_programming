#include "main.h"

/**
 * _strncpy - copies @ most in putted number
 * of the bytes from str src int dest
 * @dest: the buffer storing the str copy
 * @src: the source of str
 * @n: the max number of bytes to be copied from src
 *
 * Return: A pointer to the resulting str dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
