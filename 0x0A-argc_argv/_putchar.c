#include <stdio.h>
#include "main.h"

/**
 *_putchar - outputs char c
 *@c: character to be printed
 *Return: zero by default
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
