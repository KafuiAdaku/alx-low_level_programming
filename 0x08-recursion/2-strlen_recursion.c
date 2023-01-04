#include "main.h"
/**
 * _strlen_recursion - finds the length of a string.
 * @s: pointer to the string
 * Return: lenth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
