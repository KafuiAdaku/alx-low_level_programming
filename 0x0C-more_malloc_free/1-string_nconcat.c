#include "main.h"
#include <stdlib.h>
/**
 * _strlen - gets the length length of a string.
 * @str: string variable whose length is to be determined.
 * Return: String length.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string.
 * @s2: string to be copied.
 * @n:bytes of s2 to be copied.
 * Return: Pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int a, i, j, len;

	a = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (a < 0)
		return (NULL);
	if (a >= _strlen(s2))
		a = _strlen(s2);

	len = _strlen(s1) + a + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] =  s1[i];
	for (j = 0; j < a; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
