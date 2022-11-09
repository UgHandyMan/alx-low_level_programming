#include <stdio.h>
#include "main.h"

/**
 *main - prints name of the program
 *@argc: numer of arguments
 *@argv: vector/ array of arguments
 *Return: zero by default
 */

int main(int argc _attribute_((unsused)), char* argv[])
{
printf("%s\n", *argv);
return (0);
}
