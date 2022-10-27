#include "main.h"
#include<stdio.h>
#include<unistd.h>

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@n: pointer
 *Return: returns upper case characters
 */
char *string_toupper(char *)
{
  int i;

  i = 0;
  while (n[i] != '\0')
    {
      if (n[i] >= 'a' && n[i] <= 'z')
	n[i] = n[i] - 32;
      i++
	}
  return (n);
}
