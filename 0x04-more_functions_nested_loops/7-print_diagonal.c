#include "main.h"

/**
* print_diagonal - print \ @n times
* @n: int
* Description: print \ char @n times if #n > 0
*/
void print_diagonal(int n)
{
	int count;
	int spaces;

	count = 0;

	while (count < n)
	{
		for (spaces = 0; spaces < count; spaces++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		count++;
	}
	if (n <= 0)
		_putchar('\n');
}

