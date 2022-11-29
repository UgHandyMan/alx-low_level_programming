#include <stdio.h>
#include "list.h"

/**
*print_list - print elements in a linked list
*@h: pointer to head node
*
*Return: Zero by default
*/

size_t print_list(const list_t *h)
{
const list_t *cursor = h;
size_t n = 0;
while (h)
{
if (h->str)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next
  n++
}
return (n)
}
  
