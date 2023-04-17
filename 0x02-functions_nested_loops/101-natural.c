#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes and prints the sum of all the multiples
 *		of 3 or 5 below 1024 (excluded).
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int max = 1024;
	int sum = 0;

	for (i = 3; i <= max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
