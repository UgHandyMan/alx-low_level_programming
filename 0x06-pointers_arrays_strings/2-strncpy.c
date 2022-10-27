#include "main.h"

/**
*_strncat -  concatenates two strings.
*@dest: destination file
*@src: source file
*@n: number of characters to be copied
*Return: returns zero by default
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
