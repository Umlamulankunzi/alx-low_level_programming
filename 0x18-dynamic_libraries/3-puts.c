#include "main.h"

/**
* _puts - prints string parameter to stdout
* @str: string
* Description: prints given string @str to stdout
*/
void _puts(char *str)
{
	int count;

	count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
