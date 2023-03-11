#include <stdio.h>


/**
* _memset - fills memory with char b
* @s: string
* @b: char
* @n: size of s
* Return: char array pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
