#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: the hash table to be searched.
 * @key: the key to be looked for.
 * Return: The value associated with the key upon success.
 *		Otherwise NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	hash_node_t *node_temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	hash_index = key_index((const unsigned char *)key, ht->size);
	if (hash_index >= ht->size)
		return (NULL);

	node_temp = ht->array[hash_index];
	while (node_temp && strcmp(node_temp->key, key) != 0)
		node_temp = node_temp->next;
	if (node_temp == NULL)
		return (NULL);
	else
		return (node_temp->value);
}
