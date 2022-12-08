#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int l;
	long long int n;
	char c;
	float f;
	printf("Size of a char: %u byte(s)\n", (unsigned)sizeof(f));
	printf("Size of an int: %u byte(s)\n", (unsigned)sizeof(i));
	printf("Size of a long int: %u byte(s)\n", (unsigned)sizeof(l));
	printf("Size of a long long int: %u byte(s)\n", (unsigned)sizeof(n));
	printf("Size of a float: %u byte(s)\n", (unsigned)sizeof(f));
	return (0);
}
