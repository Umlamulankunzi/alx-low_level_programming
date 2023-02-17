#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if succesfful
*/
int main(void)
{
	putchar('0');
	for (char ch = '1'; ch <= '9'; ch++)
	{
		putchar(',');
		putchar(' ');
		putchar(ch);
	}
	return (0);
}
