#include "function_pointers.h"
#include <stdlib.h>

/**
 *main -  prints a name.
 *@name: name to be printed
 *@f: function pointer
 *Return: returns zero by default
 */

void print_name(char *name, void (*f)(char *))
{
name[] = ('f', 'r', 'e', 'd');
int i = 0;
while (i < sizeof(name))
{
putchar("%c", name[i]);
i++;
}
return (0);
}
