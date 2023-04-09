#include "main.h"


/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: pointer to string of binary characters
* Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	int str_length, indice = 0;
	unsigned int base, num = 0;

	if (!(is_valid_binary(b)))
		return (0);

	str_length = len_str(b) - 1;

	while (str_length >= 0)
	{
		base = bin_char_to_int(b[str_length]);
		num += (base * (power(indice)));
		indice++;
		str_length--;
	}
	return (num);
}

/**
* power - calculates result of 2 to the power @indice.
* @indice: unsigned int to raise 2
* Return: result of rasing 2 to the power of @indice
*/
unsigned int power(unsigned int indice)
{
	if (indice == 0)
		return (1);
	return (2 * power(indice - 1));
}


/**
* bin_char_to_int - convert binary char to int.
* @b: binary char
* Return: unsigned int either 0 or 1
*/
unsigned int bin_char_to_int(char b)
{
	return (b - 48);
}


/**
* is_valid_binary - checks if string @b is valid binary.
* @b: pointer to string of binary characters
* Return: 1 if string @b is valid binary Else 0
*/
int is_valid_binary(const char *b)
{
	if (b == NULL)
		return (0);
	if (*b != '0' && *b != '1')
		return (0);

	is_valid_binary(b + 1);
	return (1);
}


/**
* len_str - calculates length of string @str.
* @str: pointer to string of binary characters
* Return: length of str
*/
int len_str(const char *str)
{
	return ((*str == '\0') ? 0 : (1 + len_str(str + 1)));
}
