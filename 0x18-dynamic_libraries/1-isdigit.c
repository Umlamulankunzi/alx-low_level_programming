#include "main.h"

/**
* _isdigit - check if param @c is a digit
* @c: int
* Description: @c checked if is digit
* Return: 1 if @c is digit  else 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

