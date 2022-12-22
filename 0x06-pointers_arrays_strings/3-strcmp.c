#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to first string to compare
 * @s2: pointer to second string to compare
 * Return: 0 if s1 is equal to s2, positve number if s1 > s2 and
 * number if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
