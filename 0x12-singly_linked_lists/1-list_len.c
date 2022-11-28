#include "lists.h"

/**
 *list_len - gets the number of nodes
 *@h: pointer th the head
 *Return:vreturns zero by default
 */

size_t list_len(const list_t *h)
{
size_t elements = 0;
while (h)
{
elements++;
h = h->next;
}
return (elements);
}
