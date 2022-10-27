#include "main.h"

/**
*_strncat - computes the difference between two strings
*@s1: string one
*@s2: string two
*Return: returns the difference
*/
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
