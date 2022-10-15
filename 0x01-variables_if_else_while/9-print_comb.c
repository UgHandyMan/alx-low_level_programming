#include<stdio.h>
#include<unistd.h>
/**
 * main - main serves as the starting point for program execution
 *Return: returns zero by default
 */
int main(void)
{
int i;
for (i = '0'; 1 < '10'; i++)
{
putchar(i + '0');
if (i < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
