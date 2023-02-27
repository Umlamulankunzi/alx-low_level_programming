#include "main.h"

/**
* rev_string - reverses given string
* @s: string
* Description: reverses given string
*/
void rev_string(char *s)
{
	int count, index, mid;
	char t;

	count = _strlen(s) - 1;
	index = 0;
	mid = (count / 2) + 1;

	while (count >= mid)
	{
		if (count != index)
		{
			t = s[index];
			s[index] = s[count];
			s[count] = t;
		}
		count--;
		index++;
	}
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
