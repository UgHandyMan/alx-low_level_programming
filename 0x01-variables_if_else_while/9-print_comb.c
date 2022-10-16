#include<stdio.h>
#include<unistd.h>
/**
 * main - main serves as the starting point for program execution
 *Return: returns zero by default
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
if (num == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
