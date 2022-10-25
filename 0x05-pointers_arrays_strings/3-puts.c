#include "main.h"

/**
*_puts - prints a string then new line
*@str: string variable to be printed
*Return: returns zero by default
*/
void _puts(char *str)
{
_putchar(*str++);
_putchar('\n');
return (0);
}

