#include "main.h"

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


/**
* print_alphabet_x10 - prints alphabet 10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		print_alphabet();
	}
}
