#include "main.h"

/**
* _isupper - check if param @c is uppercase
* @c: int char
* Description: @c checked if is upper
* Return: 1 if @c is upper else 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

