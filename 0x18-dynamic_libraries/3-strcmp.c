#include "main.h"

/**
* _strcmp - compares two strings @s1 and @s2
* @s1: string
* @s2: string
* Return: negative or positive int if @s1 != @s2 or 0 if @s1 equal to @s2
*/
int _strcmp(char *s1, char *s2)
{
	int len_s1, index;

	index = 0;

	len_s1 = _strlen(s1);

	while (index < len_s1)
	{
		if (s1[index] == '\0')
		{
			return (0 - s1[index]);
		}
		else if (s2[index] == '\0')
		{
			return (s2[index]);
		}
		else if (s1[index] == s2[index])
		{
			index++;
			continue;
		}
		else if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
	}

	return (0);
}
