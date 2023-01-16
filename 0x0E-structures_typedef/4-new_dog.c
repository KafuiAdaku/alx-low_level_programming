#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the lenth of a string.
 * @s: string whose length is to be determined.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int ctr;

	for (ctr = 0; s[ctr]; ctr++)
		;
	return (ctr);
}

/**
 * _strcpy - copies the content of one string to another.
 * @dest: destination string.
 * @src: stirng to be  copied.
 * Return: destination stirng with copied contents.
 */
char *_strcpy(char *dest, char *src)
{
	int ctr, i;

	ctr = _strlen(src);
	for (i = 0; i < ctr; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog.
 * @name: pointer to name of type char.
 * @age: float variable for the dog's age.
 * @owner: pointer to owner of type char.
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int len_name, len_own;

	len_own = _strlen(owner);
	len_name = _strlen(name);

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (1 + len_name));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (1 + len_own));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}

	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	new->age = age;

	return (new);
}
