#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, then ('\n')
 * @a: Array of the integers
 * @n: Number of elements of the printed array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
