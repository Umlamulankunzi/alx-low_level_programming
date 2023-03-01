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
 * cap_string - converts all lowercase words after a seperator
 * @s: string.
 * Return: pointer to @s.
 */
char *cap_string(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{/* if next character after count is a char , capitalise it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = to_upper(s[0]);
		}
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
		    || s[count] == ',' || s[count] == ';' || s[count] == '.'
		    || s[count] == '.' || s[count] == '!' || s[count] == '?'
		    || s[count] == '"' || s[count] == '(' || s[count] == ')'
		    || s[count] == '{' || s[count] == '}')
		{
			if (s[count + 1] >= 97 && s[count + 1] <= 122)
			{
				s[count + 1] = to_upper(s[count + 1]);
			}
		}
		count++;
	}
	return (s);
}
