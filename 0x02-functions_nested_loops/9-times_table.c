#include "main.h"

/**
* times_table -  prints 9 times table
*
* Return: void
*/
void times_table(void)
{
	int n1, n2, res;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			res = n1 * n2;
			if (res > 9)
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
			else
			{
				_putchar(res + 48);
			}
			if (n2 != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (n1 * (n2 + 1) < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
