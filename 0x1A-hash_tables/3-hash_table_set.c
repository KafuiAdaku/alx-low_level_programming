#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table to for which data is to be added or updated.
 * @key: the key to genenrate the hash value.
 * @value: value to be stored at the genenrated index.
 * Return: 1 upon success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index, i;
	hash_node_t *ptr;
	char *value_dup;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	hash_index = key_index((const unsigned char *) key, ht->size);

	for (i = hash_index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
	}
	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
	{
		free(value_dup);
		return (0);
	}
	ptr->key = strdup(key);
	if (ptr->key == NULL)
	{
		free(value_dup);
		free(ptr);
		return (0);
	}
	ptr->value = value_dup;
	ptr->next = ht->array[hash_index];
	ht->array[hash_index] = ptr;
	return (1);
}
