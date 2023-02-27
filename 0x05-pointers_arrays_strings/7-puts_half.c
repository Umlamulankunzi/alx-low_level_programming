#include "main.h"

/**
* puts_half - prints last half of string
* @str: string
*/
void puts_half(char *str)
{
	int count, index;

	count = _strlen(str);
	index = (count % 2 == 0) ? count / 2 : (count - 1) / 2;

	while (index <= count)
	{
		_putchar(str[index]);
		index++;
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
