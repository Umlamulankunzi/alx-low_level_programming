#include "main.h"

/**
* puts2 - prints every other character of string
* @str: string
*/
void puts2(char *str)
{
	int count, index;

	count = _strlen(str) - 1;
	index = 0;

	while (index <= count)
	{
		_putchar(str[index]);
		index += 2;
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
