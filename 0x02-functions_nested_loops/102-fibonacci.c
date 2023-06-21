#include <stdio.h>

/**
 * main - prints the 1st 52 Fibonacci numbers
 * Return: nothing
 */

int main(void)
{
	int i = 0;
	long int j = 1, k = 2;

	printf("%ld, %ld", j, k);

	while (i < 50)
	{
	k = j + k;
	j = k - j;
	printf(", %ld", k);
	++i;
	}
	printf("\n");
	return (0);
}
