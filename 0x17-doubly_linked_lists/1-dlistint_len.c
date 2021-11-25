#include "lists.h"

/**
 * dlistint_len - counts and returns elements in doubly linked list
 * @h: pointer to beginning of list
 *Return: element number
 */
size_t dlistint_len(const dlistint_t *h)
{
  size_t nodes = 0;

  while (h)
    {
      h = h->next;
      nodes += 1;
    }

  return (nodes);
}
