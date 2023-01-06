#include "main.h"

/**
 * _strncpy - copies a string up tp 'n'.
 * @dest: pointer to variable of type char
 * @src: pointer to variable of type char
 * @n: the maximum number of bytes to be copied from src.
 * Return: Pointer is returned to the resulting string, dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
