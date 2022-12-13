#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: A function that writes all lowercase letter to stdout
 * Return: Alwasy 0 (Success)
 */

void print_alphabet(void)
{
int i = 'a';

while (i <= 'z')
{
	_putchar(i);
	i++;
}
_putchar('\n');
}
