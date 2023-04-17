#include <stdio.h>
#include <stdlib.h>

/**
 * main -finds and prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */

int main(void)
{
	int i;
	double a = 0;
	double b = 1;
	double sum = 0;
	int nterm = 98;

	for (i = 0; i < nterm; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%.0f", sum);
		if (i < nterm - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
