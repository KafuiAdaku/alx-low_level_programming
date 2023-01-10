#include "main.h"
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings.
 * @s1: Pointer to the firsts string.
 * @s2: Pointer to the second string.
 * Return: Pointer is returned to a newly allocated space in memory,
 *	   which contains the contents of s1 followed by s2 and
 *	   null terminated.
 *	   Returnes NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, l;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	ptr = (char *) malloc((i + j) * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (k = l = 0; k < (i + j + 1); k++)
	{
		if (k < i)
		{
			ptr[k] = s1[k];
		}
		else
		{
			ptr[k] = s2[l++];
		}
	}
	return (ptr);
}
