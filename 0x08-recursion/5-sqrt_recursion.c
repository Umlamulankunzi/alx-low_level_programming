#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the square root @n
 * @n: number to find square root of
 * Return: square root of @n if @n is perfect square else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_by_repeated_addition_recursion(n, 0));
}



/**
 * sqrt_by_repeated_addition_recursion - recursively finds sqrt by
 * comparing sqrt of @a to n adding 1 if not equal and comparing again
 * @n: number to calculate the sqaure root of
 * @a: iterator
 * Return: the resulting square root
 */
int sqrt_by_repeated_addition_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (sqrt_by_repeated_addition_recursion(n, a + 1));
}
