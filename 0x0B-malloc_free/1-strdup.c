#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly
 *		allocated space in memory,which contains
 *		a copy of the string given as a parameter.
 * @str: pointer to a string to be duplicated.
 * Return:  returns a pointer to a new string which is
 *	    a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *ns;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	ns = malloc(1 + sizeof(char) * i);
	if (ns == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
	{
		ns[c] = str[c];
	}
	ns[c] = '\0';
	return (ns);
}
