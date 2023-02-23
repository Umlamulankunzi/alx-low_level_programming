#include "main.h"

/**
* more_numbers - prints numbers 0 to 14  and a newline
* Description: print numbers 0 - 14 10 times
* followed by a newline
*/
void more_numbers(void)
{
	int num;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
				_putchar(48 + (num / 10));

			_putchar(48 + (num % 10));
		}
	_putchar('\n');
	}
}

