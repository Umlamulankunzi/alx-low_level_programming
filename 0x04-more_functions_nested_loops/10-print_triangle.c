#include "main.h"

/**
* print_triangle - print triangle of size @size using #
* @size: int size of triangle 
* Description: print triangle using # char of size @size
*/
void print_triangle(int size)
{
	int count;
	int spaces;
	int n;

	count = 1;

	while (count <= size)
	{
		for (spaces =  count; spaces < size; spaces++)
			_putchar(' ');

		for (n = 0; n < count; n++)
			_putchar('#');

		_putchar('\n');
		count++;
	}
	if (size <= 0)
		_putchar('\n');
}

