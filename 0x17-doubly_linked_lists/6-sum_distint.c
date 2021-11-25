#include "lists.h"

/**
 * sum_dlistint - get sum of data in a doubly linked list
 * @head: pointer to start of doubly linked list
 * Return: total
 */
int sum_dlistint(dlistint_t *head)
{
  int sum = 0;

  if (!head)
    return (sum);

  while (head)
    {
      sum += head->n;
      head = head->next;
    }
  return (sum);
}
