#include "lists.h"

/**
 * print_dlistint - prints all data of doubly linked list
 * @h: pointer to list head
 * Return: Element count
 */
size_t print_dlistint(const dlistint_t *h)
{
  size_t nodes = 0;

  while (h)
    {
      printf("%d\n", h->n);
      h = h->next;
      nodes += 1;
    }

  return (nodes);
}
