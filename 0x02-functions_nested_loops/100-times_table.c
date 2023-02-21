#include <stdio.h>
#include "main.h"

/**
* main - Main Entry point of program
*
* Return: 0 if successful
*/
int main(void)
{
	print_times_table(10);
	return (0);
}

/**
* print_times_table -  prints n times table
(* @n: int
 *
 * Description: end multiplication value)?
* Return: void
*/
void print_times_table(int n)
{
	int num_1, num_2, res;

	for (num_1 = 0; num_1 <= n; num_1++)
	{
		if (n > 15 || n < 0)
			break;

		for (num_2 = 0; num_2 <= n; num_2++)
		{
			res = num_1 * num_2;
				printf("%d", res);
			if (num_2 != n)
				printf(",  ");
			else
				printf("\n");
		}
	}
}
