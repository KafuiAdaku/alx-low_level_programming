#include "main.h"

/**
 * _isupper - checks whether a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if True, 0 if False.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
