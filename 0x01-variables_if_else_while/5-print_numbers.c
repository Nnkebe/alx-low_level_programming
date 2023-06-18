#include <stdio.h>

/**
 * main - prints of base 10 (0-9) followed by ('\n')
 *
 * Return: (0) (Succuss)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
