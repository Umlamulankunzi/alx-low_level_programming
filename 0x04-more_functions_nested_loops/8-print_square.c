#include "main.h"

/**
* print_square - print square using #
* @size: int size of square
* Description: print square using # symbol withe size @size
*/
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

