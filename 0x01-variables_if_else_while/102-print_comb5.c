#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing all possible combibnationof two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b;

for (a = 0; a < 100; a++)
{
	for (b = 0; b < 100; b++)
	{
		if (a < b)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			putchar(' ');
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);
			if (!((x == 98) & (b == 99)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
	putchar('\n');
	return (0);
}
