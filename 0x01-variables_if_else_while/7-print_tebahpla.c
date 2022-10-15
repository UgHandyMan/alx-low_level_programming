#include<stdio.h>
#include<unistd.h>
/**
* main - main serves as the starting point for program execution
*Return: returns zero by default
*/
int main(void)
{
int a;
for (a = 'z'; a >= 'a'; a--)
{
  putchar(a);
}
putchar('\n');
return (0);
