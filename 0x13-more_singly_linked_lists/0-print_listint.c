#include "lists.h"
#include <stdio.h>

/**
*print_listint -  prints all the elements of a listint_t list
*@h: pointer to the list
*Return: returns a zero by default
*/

size_t print_listint(const listint_t *h)
{
const listint_t *tp;
unsigned int x =0;
tp = h
while (tp)
{
printf("%d\n", tp->->n);
x++;
tp = tp->next;
}
return (x);
}
