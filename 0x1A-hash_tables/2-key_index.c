#include "hash_tables.h"


/**
 * ky_index - function  gives index of a key.
 * @key: Const unsigned char - unique value passed
 * @size: Unsigned long int -  array size
 * Return: Unsigned long int of index where key is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);

}
