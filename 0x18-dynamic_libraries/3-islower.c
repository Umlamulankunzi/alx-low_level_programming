#include "main.h"

/**
* _islower - Checks if char is lowercase
(* @c: char to check if lowercase
*
* Description: char to check if lower)?
* Return: 1 if char is lower else 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
