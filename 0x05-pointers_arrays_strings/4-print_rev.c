#include "main.h"

/**
* print_rev - prints string parameter in reverse to stdout
* @s: string
* Description: prints given string @str in reverse to stdout
*/
void print_rev(char *s)
{
	int count;

	count = _strlen(s) - 1;

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}

/**
* _strlen - calculates the length of string @s
* @s: string
* Description: calculates the length of a string
* Return: length of string
*/
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
