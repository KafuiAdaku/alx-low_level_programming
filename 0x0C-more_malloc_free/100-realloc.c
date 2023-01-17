#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using mallock and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: space allocated to ptr in bytes.
 * @new_size: new size of new memory block in bytes.
 * Return: Pointer to ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *temp_p;
	char *dup_ptr;

	dup_ptr = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	temp_p = malloc(new_size);
	if (temp_p == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			temp_p[i] = dup_ptr[i];
		}
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			temp_p[i] = dup_ptr[i];
		}
	}
	free(ptr);
	return (temp_p);
}
