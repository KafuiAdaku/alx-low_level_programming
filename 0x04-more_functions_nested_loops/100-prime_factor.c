#include <stdio.h>

/**
 * main - largest prime factor of a number
 * Return: Always 0 (success)
 */

int main(void)
{
	long int num = 612852475143;
	long int divs = 2;
	long int la_prime = 0;

	while (num != 1)
	{
		if (num % divs == 0)
		{
			num /= divs;
			la_prime = divs;
		}
		divs += 1;
	}
	printf("%ld\n", la_prime);
	return (0);
}
