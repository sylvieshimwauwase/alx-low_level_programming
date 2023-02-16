#include<stdio.h>
/**
 * main - program to print sizes
 * Return:0 succeed
 */
int main(void)
{
printf("size of a char: %zu byte(S)\n", sizeof(char));
printf("size of an int: %zu byte(S)\n", sizeof(int));
printf("size of a long int: %zu byte(S)n", sizeof(long int));
printf("size of a long long int: %zu byte(S)\n", sizeof(long long int));
printf("size of a float: %zu byte(S)\n", sizeof(float));
return (0);
}
