#include "main.h"
#include <stdio.h>

/**
*strlen - returns the length of a string 
*@s: string variable
*Return: returns length else is zero
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
