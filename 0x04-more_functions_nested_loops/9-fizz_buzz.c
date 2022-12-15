#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", n);
		}
		if (n != 100)
		{
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
