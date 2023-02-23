#include "main.h"

/**
* print_line - print _ @n times
* @n: int
* Description: print _ char @n times if #n > 0
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

