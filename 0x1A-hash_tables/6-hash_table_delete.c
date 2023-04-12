#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: pointer to the hash table.
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node_temp, *node_next;
	size_t i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node_temp = ht->array[i];
		while (node_temp)
		{
			node_next = node_temp->next;
			free(node_temp->key);
			free(node_temp->value);
			free(node_temp);
			node_temp = node_next;
		}
	}
	free(ht->array);
	free(ht);
}
