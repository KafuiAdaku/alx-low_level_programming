#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to struct dog to initialise.
 * @name: pointer to name of type char.
 * @age: age of dog of type float.
 * @owner: pointer to dog owner of type char.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
