#include "main.h"

/**
 * print_number - prints numbers for zero to nine.
 * Return: void
 */

void print_numbers(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
