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
	int last;

	if (n < 0)
	{
		last = (n * -1) % 10;
	}
	last = n % 10;
	_putchar('0' + last);
	return (last);
}

