#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the dog.
 * @d: Pointer to dog_t.
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
