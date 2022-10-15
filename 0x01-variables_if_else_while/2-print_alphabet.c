#include<stdio.h>
#include<unistd.h>
/**
*main - entry point of the function
*Return: thsi returns zero by default
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
