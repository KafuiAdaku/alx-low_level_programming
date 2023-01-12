#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements for the array.
 * @size: size of each element/block.
 * Return: _calloc returns NULL if nmemb or size is 0.
 *	   _calloc returns NULL if malloc fails.
 *	   otherwise return pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}
	return (ptr);
}
