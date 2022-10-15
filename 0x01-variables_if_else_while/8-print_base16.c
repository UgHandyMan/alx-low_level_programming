#include<stdio.h>
#include<unistd.h>
/**
* main - main serves as the starting point for program execution
*Return: returns zero by default
*/
int main(void)
{
char c;
char d = '0'
while (d <= '9')
{
putchar(d);
d++;
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
