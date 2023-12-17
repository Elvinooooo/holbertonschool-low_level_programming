#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 * @key: is the key
 * @size: is the size of the array
 * Return: index which the key/val should be stored in the array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key) * size;
	return (hash_value % size);
}
