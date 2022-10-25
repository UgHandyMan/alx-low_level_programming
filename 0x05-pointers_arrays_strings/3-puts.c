#include "main.h"

/**
*_puts - prints a string then new line
*@str: string variable to be printed
*Return: returns zero by default
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}

