#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if succesfful
*/
int main(void)
{
	for (char ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (char ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
