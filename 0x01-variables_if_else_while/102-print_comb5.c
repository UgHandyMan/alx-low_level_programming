#include <stdio.h>
#include <unistd>
/**
 * main - main serves as the starting point for program execution
 *Return: returns zero by default
 */
int main(void)
{
  int c, i;
  for (c = '0'; c <= '98'; c++)
    {
      for (i = '0'; i <= '99'; i++)
	{
	  if (c < i)
	    {
	      putchar(c);
	      putchar(i);
	      if (c == '98' && i == '99')
		{
		  putchar(',');
		    putchar(' ');

		}
	    }
	}
    }
  putchar('\n');
  return(0);
}
