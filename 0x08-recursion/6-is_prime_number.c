#include "main.h"

/**
* is_prime_number - says if an integer is a prime number or not
* @n: number to evaluate
* @i: iterator
* Return: 1 if n is a prime number, 0 if not
*/

int is_prime_number(int n)
{
int i;
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (prime_number(n, i - 1));
} 
