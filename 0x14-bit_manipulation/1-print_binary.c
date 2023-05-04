#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int i, started_print = 0;

	/* iterate over each bit from left to right */
	for (i = ((sizeof(unsigned long int) * 8) - 1); i >= 0; i--)
	{
		if ((n >> i) & 1 || started_print)
		{
			_putchar((n >> i) & 1 ? '1' : '0');
			started_print = 1;
		}
	}

	if (!started_print)
		_putchar('0');
}
