#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: area where memory is dumped
 * @src: area where memory is copied
 * @n: number of bytes
 *
 * Return: copied area with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
