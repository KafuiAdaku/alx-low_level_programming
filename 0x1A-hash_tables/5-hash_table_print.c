#include "hash_tables.h"

/**
 * hash_table_print - a function that prints the hash table.
 * @ht: a pointer to the hash table.
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	size_t comma_flag = 0;
	hash_node_t *node_temp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node_temp = ht->array[i];
			while (node_temp)
			{
				if (comma_flag == 1)
					printf(", ");
				printf("'%s' : '%s'", node_temp->key, node_temp->value);
				node_temp = node_temp->next;
				comma_flag = 1;
			}
		}
	}
	printf("}\n");
}
