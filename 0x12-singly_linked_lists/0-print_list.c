#include "list.h"

/**
 *print_list - print elements in a linked list
 *@h: pointer to head node
 *
 *
 *
 *Return: Zero by default
 */

size_t print_list(const list_t *h)
{
size_t node_count = 1;
if (h == null)
return (0);

while (h->next != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0);
else printf("[%d] %s\n", h->len, h->str);
}

printf("[%d] %s\n", h->len, h->str);
return (node_count);
}
  
