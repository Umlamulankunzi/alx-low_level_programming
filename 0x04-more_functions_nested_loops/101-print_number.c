#include "main.h"

/**
* print_number - prints number @n
* @n: int
* Description: pr9nts number @n using _putchar function
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	else if (n == 0)
		_putchar('0');

	while (n)
	{
		_putchar(48 + (n % 10));
		n = n / 10;
	}
}

