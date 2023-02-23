#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of program.
 * Return: 0 if successful
 */
int main(void)
{
	long int num;

	num = 612852475143;

	if (is_prime(num))
		printf("%ld\n", num);
	else
		printf("%ld\n", high_factor(num));
	return (0);
}

/**
 * is_prime - check if @n is prime
 * @n: int to check
 * Return: 1 if @n is prime else 0
 */
int is_prime(long int n)
{
	int i;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
	{
		for (i = 2; i <= (n / 2); i++)
		{
			if (n % i == 0)
				return (0);
		}
	return (1);
	}
}


/**
 * high_factor - finds highest prime factor of param @num
 * @num: int num to check
 * Return: Highest factor
 */
long int high_factor(long int num)
{
	long int n;
	long int factor;

	factor = num;
	for (n = 2; n <= factor; n++)
	{
		if (is_prime(factor))
			break;
		else
		{
			if ((factor % n == 0) && is_prime(n))
			{
				factor = factor / n;
				continue;
			}
			else
			{
				factor = factor;
			}
		}
	}
	return (factor);
}

