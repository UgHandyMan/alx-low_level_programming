#include "lists.h"

/**
 *list_len - gets the number of nodes
 *@h: pointer th the head
 *Return: returns zero by default
 */

size_t list_len(const list_t *h)
{
size_t elements;
  elements = 0;
while (h != NULL)
{
elements++;
h = h->next;
}
return (elements);
}
