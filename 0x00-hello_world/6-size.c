#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on
 * Return 0 (Pass)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("a float: %lu byte(s)\n", (unsigned)sizeof(e));
return (0);
}
