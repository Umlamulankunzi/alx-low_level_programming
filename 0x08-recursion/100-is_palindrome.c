#include "main.h"



/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if @s is palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _len_str_(s)));
}



/**
 * check_palindrome - helper function determine if the chars are palindrome
 * @s: string
 * @count: count
 * @len_str: length of @s
 * Return: 1 if @s is palindrome, 0 if not
 */
int check_palindrome(char *s, int count, int len_str)
{
	if (*(s + count) != *(s + len_str - 1))
		return (0);

	if (count >= len_str)
		return (1);

	return (check_palindrome(s, count + 1, len_str - 1));
}



/**
 * _len_str_ - helper function to find length of string @s
 * @s: string
 * Return: length of @s
 */
int _len_str_(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _len_str_(s + 1));
}
