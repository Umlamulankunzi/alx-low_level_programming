#include "main.h"


/**
 * _strchr - Find char in a string
 * @s: string
 * @c: char
 * Return: Pointer to the first occurrence of char in  string s
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s):
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}

