#include "main.h"

/**
 * print_triangle - prints a triangle followed by a newline
 * @size : integer variable
 * Return : void
 */

void print_triangle(int size)
{
	int i, n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (n = 0; n < size - i; n++)
			{
				_putchar(' ');
			}
			for (n = 0; n < i; n++)
			{
				_putchar('#');
			}
			if (i == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
