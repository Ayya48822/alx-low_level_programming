#include "hash_tables.h"

/**
* key_index - return index of the key
* @key: key to generate index
* @size:size of the array of the hash table
*
*Return: index of key/value pair stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	return (hash_djb2(key) % size);
}
