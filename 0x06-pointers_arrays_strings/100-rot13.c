#include "main.h"


/**
* rot13_char - encodes a char using rot13.
* @c: char
* Return: char
*/
char rot13_char(char c)
{
	int index;
	char ltrs[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char translate[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; index < 52; index++)
	{
		if (c == ltrs[index])
			return (translate[index]);
	}
	return (c);
}


/**
* rot13 - encodes a string using rot13.
* @str: string
* Return: char *
*/
char *rot13(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		str[index] = rot13_char(str[index]);
		index++;
	}
	return (str);

}
