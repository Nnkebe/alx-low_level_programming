#include "main.h"
/**
 * _isalpha - function that checks if c is a lette,lowercase or uppercase
 * @c: is an int used for the argument of the function
 * Return: (0)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
