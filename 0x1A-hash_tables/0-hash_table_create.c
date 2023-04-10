#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array.
 * Return: A pointer to the newly created array if successfull,
 *	   otherwise NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *temp = malloc(sizeof(hash_node_t) * size);

	if (temp == NULL)
		return (NULL);

	return (temp);
}
