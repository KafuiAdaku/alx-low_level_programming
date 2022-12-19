#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a charcater string variable
 * Return: void
 */
void rev_string(char *s)
{
	int i, length, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;
	i = 0;
	half =  length / 2;

	while (half--)
	{
		temp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
