#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints 9 natural numbers up to 98
(* @n: int
 *
 * Description: starting value)?
 * Return: void
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n < 98)
			n++;
		else
			n--;
	}
	printf("%d\n", 98);
}
