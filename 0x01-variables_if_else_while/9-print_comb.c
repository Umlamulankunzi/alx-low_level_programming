#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if succesfful
*/
int main(void)
{
	int ch;

	putchar('0');
	for (ch = 49; ch <= 57; ch++)
	{
		putchar(',');
		putchar(' ');
		putchar(ch);
	}
	return (0);
}
