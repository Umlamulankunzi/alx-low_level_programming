#include "main.h"

/**
* print_most_numbers - prints numbers 0 to 9 and a newline
* Description: print numbers 0 to 9 except fot the numbers
* 2 and 4 followed by a newline
*/
void print_most_numbers(void)
{
	int count;

	count = 10;

	while (count)
	{
		if (count == 8 || count == 6)
		{
			count--;
			continue;
		}

		_putchar(48 + (10 - count));
		count--;
	}
	_putchar('\n');
}

