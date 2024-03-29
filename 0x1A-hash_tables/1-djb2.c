#include "hash_tables.h"

/**
 * hash_djb2 - hash djb2 algorithm function
 *
 * @str: Input str.
 * Return: The hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = (hash * 33) + c;
	}

	return (hash);
}
