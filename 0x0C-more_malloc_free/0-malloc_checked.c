#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes to be reserved.
 * Return: Pointer to the allocated memory on success,
 *	   on failure, normal process terminations with value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
