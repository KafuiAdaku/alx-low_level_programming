#include <stdlib.h>
#include "main.h"
/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: specific character to initialise array.
 * Return: NULL if size is 0, returns pointer to array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	p = (char *) malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);

}
