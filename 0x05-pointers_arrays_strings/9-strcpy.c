#include "main.h"

/**
*_strcpy - copies the string pointed to
*@dest: destination
*@src: source
*Return: null by default inless defined
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
while (src[l])
{
*(dest[l]) = *(src[l]);
l++;
}
return (dest);
}
