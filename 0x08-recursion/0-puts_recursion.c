#include "main.h"
#include <unistd.h>

/**
*_puts_recursion - prints a string
*@s: string to be printed
*Return: returns zero by default
*/
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar('\n');
return 0;
}
while (*s != '\0')
{
_putchar(*s);
_puts_recursion(s+1);
s++;
}
}
