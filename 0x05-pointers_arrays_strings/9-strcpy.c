#include "main.h"

/**
*_strcpy - copies the string pointed to
*@dest: destination
*@src: source
*Return: null by default inless defined
*/
char *_strcpy(char *dest, char *src)
{
int len = 0;
while (*(src + len) != '\0')
{
*(dest + len) = *(src + len);
l++;
}
return (dest);
}

