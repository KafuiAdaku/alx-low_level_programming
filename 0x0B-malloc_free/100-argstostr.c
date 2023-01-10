#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument counter of type int.
 * @av: argument vector of type char.
 *Return: NULL if ac equals 0 or av  equals NULL.
 *	  Returns a pointer to the new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *ptr, *ret_ptr;
	int i, j, tot;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = tot = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, tot++)
		{
			;
		}
		tot++;
	}
	tot++;

	ptr = (char *) malloc(tot * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ret_ptr = ptr;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	return (ret_ptr);
}
