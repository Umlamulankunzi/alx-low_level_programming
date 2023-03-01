#include "main.h"

/**
* to_upper - convert lowercase char to uppercase
* @c: char
* Return: char
*/
char to_upper(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;

	return (c);
}


/**
* cap_string - convert lowercase char to uppercase if preceded by seperator
* @str: string
* Return: string
*/
char *cap_string(char *str)
{
	int i;
	int sep;

	sep = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
			(str[i] == ',') || (str[i] == ';') || (str[i] == '.') ||
			(str[i] == '!') || (str[i] == '?') || (str[i] == '"') ||
			(str[i] == '(') || (str[i] == ')') || (str[i] == '{') ||
			(str[i] == '}'))
		{
			sep = 1;
			continue;
		}

		if (str[i] >= 97 || str[i] <= 122)
		{
			if (sep)
			{
				str[i] = to_upper(str[i]);
				sep = 0;
			}
		}
	}

	return (str);
}
