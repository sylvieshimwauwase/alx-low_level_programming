#include<stdio.h>
/**
 * main - program to print sizes
 * Return:0 succeed
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of a char: %lu byte\n", sizeof(a));
printf("size of an int: %lu byte\n", sizeof(b));
printf("size of a long int: %lu byte\n", sizeof(c));
printf("size of a long long int: %lu byte\n", sizeof(d));
printf("size of a float: %lu byte\n", sizeof(f));
return (0);
}
