#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 fibonacci numbers.
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int a = 0;
	long int b = 1;
	long int sum = 0;
	int term = 50;

	for (i = 0; i < term; i++)
	{
		sum = a + b;
		printf("%ld", sum);
		a = b;
		b = sum;
		if (i != term - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
