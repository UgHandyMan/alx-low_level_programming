#include<stdio.h>
#include<unistd.h>
/**
 *main - main serves as the starting point for program execution
 *Return: returns zero by default
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
