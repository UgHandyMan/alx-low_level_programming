#include <stdio.h>
#include <stdout.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *main -  returns the sum of all its parameters.
 *@n: parameter
 *@y: interger
 *Return: Returns sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
  va_list list;
  va_start(list, n);
  int y, sum = 0;
  for (y = 0, y < n, y++)
    {
      sum = 0;
      sum += va_arg(list, int);
    }
  va_end(list)
    return sum;

  int main()
  {
    sum = sum_them_all(20, 30, 15, 21);
    _putchar("%d\n", sum)
