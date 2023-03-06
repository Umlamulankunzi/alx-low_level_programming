#include "main.h"



/**
 * _strstr - locates a substring in source string haystack.
 * @haystack: string to be searched.
 * @needle: substring to search for.
 * Return: 0 if not found else char *
 */
char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}

