#include<stdio.h>
/*
 *main - is the point of entry of the program.
 *return: returns a zero by default
 */
int main(void)
{
printf("Size of a char: %Id byte(s)\n", sizeof(char));
printf("Size of an int: %Id byte(s)\n", sizeof(int));
printf("Size of a long int: %Id byte(s)\n", sizeof(long int));
printf("Size of a long long int: %Id byte(s)\n", sizeof(long long int));
printf("Size of a float: %Id byte(s)\n", sizeof(float));
return (0);
}
