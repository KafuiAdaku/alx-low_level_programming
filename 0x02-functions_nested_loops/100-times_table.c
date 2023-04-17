#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: integer variable.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (product > 99)
			{
				_putchar((product % 1000) / 100 + '0');
				_putchar((product % 100) / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else if (product > 9)
			{
				_putchar(' ');
				_putchar((product % 100) / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else if (j > 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product % 10 + '0');
			}
			else
				_putchar(product + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
