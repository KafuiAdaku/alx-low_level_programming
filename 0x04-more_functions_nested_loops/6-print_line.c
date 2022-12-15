#include "main.h"

/**
 * print_line - prints a straight line
 * @n: integer variable
 * Return: void
 */

void print_line(int n)
{
	int l;

	l = 0;
	while (l < n && n > 0)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');
}
