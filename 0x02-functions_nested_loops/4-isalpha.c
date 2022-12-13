#include "main.h"

/**
 * _isalpha - Entry point
 * @c : The integer value it receives
 * Description: Uppercase character testing function
 * Return: 1 if True, 0 if False
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
