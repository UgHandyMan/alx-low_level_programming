#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*sum_them_all -  returns the sum of all its parameters.
*@n: parameter
*@index: interger
*@sum: some of intergers
*Return: Returns sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int index;
va_start(nums, n);
for (index = 0; index < n; index++)
sum += va_arg(nums, int);
va_end(nums);
return (sum);
}
