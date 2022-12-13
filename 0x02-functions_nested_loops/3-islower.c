#include "main.h"

/**
 * _islower - Entry point
 * Description: Character testing function
 * @c: the integer value it receives
 * Return: Always 1 if True, 0 if False
 */

int _islower(int c)
{
	int lower = 'a';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (c == lower)
		{
			return (1);
		}
	}
	return (0);
}
