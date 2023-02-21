#include "main.h"

/**
* main - Main Entry point of program
*
* Return: 0 if successful
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
* print_alphabet - Prints lowercase alphabet chars
*
* Return: void
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
