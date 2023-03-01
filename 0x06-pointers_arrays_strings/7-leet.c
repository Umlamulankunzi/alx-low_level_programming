#include "main.h"


/**
* leet_char - translates char into 1337
* @c: char
* Return: char
*/
char leet_char(char c)
{
	int index;
	char letters[] = "AaEeOoTtLl";
	char translate[] = "4433007711";

	for (index = 0; index < 10; index++)
	{
		if (c == letters[index])
			return (translate[index]);
	}
	return (c);
}


/**
* leet - translates string into 1337 by using leet_char function
* @str: string
* Return: char *
*/
char *leet(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		str[index] = leet_char(str[index]);
		index++;
	}
	return (str);

}
