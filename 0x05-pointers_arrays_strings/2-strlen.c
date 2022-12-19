#include "main.h"

/**
 * _strlen - returns the length.
 * @s : pointer to a charater variable
 * Return: integer, length of a string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
