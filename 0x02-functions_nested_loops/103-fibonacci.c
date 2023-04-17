#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *		of the fibonacci sequence less than 4,000,000.
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int a = 0;
	long int b = 1;
	long int sum = 0;
	long int even_sum = 0;
	int nterm = 33;

	for (i = 0; i < nterm; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
			even_sum += sum;
	}
	printf("%ld\n", even_sum);
	return (0);
}
