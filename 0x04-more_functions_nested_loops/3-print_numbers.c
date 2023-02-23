#include "main.h"

/**
* print_numbers - prints numbers 0 to 9 and a newline
* Description: print numbers 0 to 9 followed by a newline
*/
void print_numbers(void)
{
	int count;

	count = 10;

	while (count)
	{
		_putchar(48 + (10 - count));
		count--;
	}
	_putchar('\n');
}

