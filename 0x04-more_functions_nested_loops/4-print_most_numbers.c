#include "main.h"

/**
 * print_most_numbers - except 2 and 4, it prints numbers from
 * zero to nine.
 * Return: void
 */

void print_most_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		if ((number != 2) && (number != 4))
		{
			_putchar(number + '0');
		}
		number++;
	}
	_putchar('\n');
}
