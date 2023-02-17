#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if succesfful
*/
int main(void)
{
	char ch;

	putchar('0');
	for (ch = '1'; ch <= '9'; ch++)
	{
		putchar(',');
		putchar(' ');
		putchar(ch);
	}
	return (0);
}
