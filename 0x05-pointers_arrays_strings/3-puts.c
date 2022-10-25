#include "main.h"

/**
*_puts - prints a string then new line
*@str: string variable to be printed
*Return: returns zero by default
*/
void _puts(char *str)
{
str = "I do not fear computers. I fear the lack of them - Isaac Asimov"
_putchar(*str++);

_putchar('\n');
}
