#include "main.h"

/**
 * _strncat - concatenates tow strings using at most 'n' bytes from src.
 * @dest: pointer to a variable of type char
 * @src: pointer to a variable of type char
 * @n: number of bytes from src to be appended to dest.
 * Return: Pointer is returned to the resulting string, dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
