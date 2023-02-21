#include "main.h"

/**
* main - Main Entry point of program
*
* Return: 0 if successful
*/
int main(void)
{
	return (0);
}

/**
* _isalpha - Checks if char is lowercase
(* @c: char to check if is alphabetic char
*
* Description: char to check is alphabetic char)?
* Return: 1 if char is alpha else 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
