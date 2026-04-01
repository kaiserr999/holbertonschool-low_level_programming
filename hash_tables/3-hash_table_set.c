#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update
 * @key: key (cannot be empty string)
 * @value: value associated with key (must be duplicated)
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index;
	char *dup_key, *dup_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dup_key = strdup(key);
	if (dup_key == NULL)
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
	{
		free(dup_key);
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = dup_value;
			free(dup_key);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		free(dup_key);
		return (0);
	}

	new_node->key = dup_key;
	new_node->value = dup_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}