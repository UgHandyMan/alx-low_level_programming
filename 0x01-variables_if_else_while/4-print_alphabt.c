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
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
else
{
}
}
putchat('\n');
return (0);
}
