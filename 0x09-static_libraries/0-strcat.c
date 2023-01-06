#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer to a variable of type char
 * @src: pointer to a variable of type char
 * Return: pointer is returned to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
