#include <stdio.h>

/**
 * main - print all lowercase alphabet in reverse.
 * followed by ('\n')
 * Return: Always (0) (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
