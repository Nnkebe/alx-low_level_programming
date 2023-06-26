#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: the string printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int s = 0;
	int r;

	while (str[s] != '\0')
	{
		s++;
	}
	if (s % 2 == 1)
	{
		r = (s - 1) / 2;
		r = +1;
	}
	else
	{
		r = s / 2;
	}
	for (; r < s; r++)
	{
		_putchar(str[r]);
	}
	_putchar('\n');
}
