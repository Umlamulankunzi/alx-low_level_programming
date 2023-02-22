#include "main.h"

/**
* print_last_digit - finds lasts digit of n
(* @n: int
*
* Description: value to calculate last digit)?
* Return: last digit of n
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		return ((n * - 1) % 10);
		}
	return (n % 10);
}
