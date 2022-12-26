#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*print_list - print elements in a linked list
*@next: pointer to head node
*
*Return: Zero by default
*/

typedef struct list_t {
int value;
struct list_t *next;
} list_t;

size_t print_list(const list_t *h) {
size_t count = 0;
while (h != NULL) {
printf("%d ", h->value);
h = h->next;
count++;
}
printf("\n");
return count;
}
