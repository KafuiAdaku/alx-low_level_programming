#include "main.h"

/**
 * _isdigit - Checks if the character is a digit
 * @c: Carrier variable
 * Return: 1 if True, 0 if False
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
