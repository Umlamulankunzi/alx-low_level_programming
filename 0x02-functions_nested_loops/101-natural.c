#include <stdio.h>
#include "main.h"

/**
* main - Main Entry point of program
*
* Return: 0 if successful
*/
int main(void)
{
	print_multiples();
	return (0);
}

/**
 * print_multiples -  sums up all multiples of 3 & 5 up to 1024
 *
 * Return: void
*/
void print_multiples(void)
{
	int count;
	int sum;

	sum = 0;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
		{
			sum += count;
		}
	}
	printf("%d\n", sum);
}
