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
if (name == NULL || F == NULL)
return (0);
f(name);
}
