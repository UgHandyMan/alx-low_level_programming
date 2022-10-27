#include "main.h"
#include<stdio.h>
#include<unistd.h>

/**
*_strncat -  concatenates two strings.
*@dest: destination file
*@src: source file
*@n: number of characters to be copied
*Return: returns zero by default
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
    
