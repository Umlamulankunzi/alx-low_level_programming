#include <stdio.h>
#include "main.h"

/**
* main - Main Entry point of program
*
* Return: 0 if successful
*/
int main(void)
{
	print_50_fibonacci();
	return (0);
}

/**
 * print_50_fibonacci -  print 50 fibonacci numbers
 *
 * Return: void
*/
void print_50_fibonacci(void)
{
	unsigned int n_1;
	unsigned int n_2;
	int count;
	unsigned int fib_num;

	n_1 = 2;
	n_2 = 1;

	printf("%u, %u, ", n_2, n_1);

	for (count = 0; count < 48; count++)
	{
		fib_num = n_1 + n_2;
		printf("%u", fib_num);
		n_2 = n_1;
		n_1 = fib_num;
		if (count != 47)
			printf(", ");
	}
	printf("\n");
}