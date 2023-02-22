#include <stdio.h>
#include "main.h"

/**
* print_times_table -  prints n times table
(* @n: int
 *
 * Description: end multiplication value)?
* Return: void
*/
void print_times_table(int n)
{
	int num_1, num_2, res, next;

	for (num_1 = 0; num_1 <= n; num_1++)
	{
		if (n > 15 || n < 0)
			break;

		for (num_2 = 0; num_2 <= n; num_2++)
		{
			res = num_1 * num_2;
				printf("%d", res);
			if (num_2 != n)
			{
				next = num_1 * (num_2 + 1);
				if (next >= 100)
				{
					printf(", ");
				}
				else if (next >= 10)
				{
					printf(",  ");
				}
				else
				{
					printf(",   ");
				}
			}
			else
				printf("\n");
		}
	}
}
