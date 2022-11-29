#include "main.h"
#include <stdio.h>

/**
 *print_listint - prints all the elements of a listint_t list
 *@h; Pointer to the list
 *Return: returns zero by default
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *pt;
	unsigned int x = 0;
	tp = h;
	while (pt)
	{
		printf("%d\n", pt->n);
		x++;
		pt = pt->next;
	}
	return (x);
}

