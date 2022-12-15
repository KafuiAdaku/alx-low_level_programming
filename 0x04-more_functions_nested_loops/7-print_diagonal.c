#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: integer variable
 * Return: void
 */

void print_diagonal(int n)
{
	int d, f;

	d = 0;
	while (d < n && n > 0)
	{
		f = 0;
		while (f < d)
		{
			_putchar(' ');
			f++;
		}
		_putchar('\\');
		_putchar('\n');
		d++;
	}
	if (d == 0)
	{
		_putchar('\n');
	}
}
