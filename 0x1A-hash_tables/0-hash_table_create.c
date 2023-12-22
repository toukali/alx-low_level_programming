#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size <= 0)
		return (0);

	table = malloc(sizeof(hash_table_t));

	if (table == 0)
		return (0);

	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == 0)
	  {
		free(table);
		return (0);
	}

	table->size = size;

	return (table);
}
