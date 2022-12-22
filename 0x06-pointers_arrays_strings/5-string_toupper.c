#include "main.h"
/**
 * string_toupper - changes all lowercase of a string to uppercase.
 * @str: The string to be changed
 * Return: A pointer to the string to be changed
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
		str[index] -= 32;
		}
		index++;
	}
	return (str);
}
