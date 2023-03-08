#include "main.h"
#include <math.h>

int check_prime(int n, int i);

/**
 * is_prime_number - prints a prime number
 * @n:number
 * Return:integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if number is  prime
 * @n:number
 * @i:number of times
 * Return:1 for prime or 0 for composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}
