#include "hash_tables.h"
/**
 * hash_dbj2 - Hash function implementing the dbj2 algorithm
 * @str: Key to hash
 * Return: Hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
        unsigned long int hash = 5381;
        int c;

        while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

        return hash;
}
