#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if successful
*/
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
