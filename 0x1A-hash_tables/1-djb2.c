#include "hash_tables.h"

/**
 * hash_djb2 - implement djb2 algorithm (one of the greatest string hash functions)
 * source code copied from http://www.cse.yorku.ca/~oz/hash.html
 *
 * @string: value
 * Return: key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
  unsigned long hash = 5381;
  int c;

  while ((c = *str++))
    hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

  return (hash);
}
