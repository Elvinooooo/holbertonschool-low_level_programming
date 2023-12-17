#include "hash_tables.h"
/**
 *hash_table_print -  functions that prints a hash table
 *@ht: hash table
 *Return: Nothing. Just print the key/value
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;

	unsinged long int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node =  ht->array[i];
		while (node != NULL)
		{
			printf("'%s':'%s'", node->key, node->value);
			if (i < ht->size - 1 || node->next != NULL)
				printf(", ");
			node =  node->next;
		}
	}
	printf("}\n");
}
