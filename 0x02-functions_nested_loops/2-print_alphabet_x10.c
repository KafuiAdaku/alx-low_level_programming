#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Writing lowercase letter to the stdout ten times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ctr, b;

	ctr = 0;
	b = 'a';

	while (ctr <= 9)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		ctr++;
	}
}
