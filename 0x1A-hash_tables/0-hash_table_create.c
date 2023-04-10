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
	unsigned long int i;

	hash_table_t *hash_tab_temp = malloc(sizeof(hash_table_t));

	if (hash_tab_temp == NULL)
		return (NULL);

	hash_tab_temp -> size = size;
	hash_tab_temp -> array = malloc(sizeof(hash_node_t*) * size);

	if (hash_tab_temp -> array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_tab_temp -> array[i] = NULL;
	}

	return (hash_tab_temp);
}
