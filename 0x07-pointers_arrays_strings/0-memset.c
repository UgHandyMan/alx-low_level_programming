#include "main.h"
#include <stdio.h>

/**
*_memset - function fills the bytes of the memoryarea pointed
*@s: starting address of the memory to print
*@n: size of the memory to print
*@b: constant
*Return: returns zero by default
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
