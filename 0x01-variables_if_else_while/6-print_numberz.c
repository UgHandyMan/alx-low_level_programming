#include<stdio.h>
#include<unistd.h>
/**
 * main - main serves as the starting point for program execution
 *Return: returns zero by default
 */
int main(void)
{
int a; 
for (a = 0; a < 10; a++)
{
  putchar(a + '0');	
}
putchar('\n');
return (0);
}
