#include "lists.h"

/**
 *list_len - gets the number of nodes
 *@h: pointer th the head
 *Return: returns zero by default
 */

size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int counter = 0;
temp = h;
while (temp)
{
counter++;
temp = temp->next;
}
return (counter)
}
