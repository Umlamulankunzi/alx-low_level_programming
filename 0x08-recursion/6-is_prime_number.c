#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}



/**
 * is_prime - calculates if a number is prime recursively
 * @n: int
 * @count: int
 * Return: 1 if n is prime else 0
 */
int is_prime(int n, int count)
{
	if (count == 1)
		return (1);

	else if ((n % count == 0) && (count > 0))
		return (0);

	return (is_prime(n, count - 1));
}
