#include "main.h"



/**
* get_endianness -check if architecture is little endian or big endian.
*
* Description: Little and big endian are two ways of storing multibyte
*	data-types (int, float, etc).
*	Little endian is where the last byte of data-type is stored first.
*	and in Big endian the first byte of the data-type is stored first.
*
* Return: 0 if big endian Else 1 if little endian
*/
int get_endianness(void)
{
	unsigned int x = 0x97854321;
	char *first_byte = (char *) &x;

	if (*first_byte == 0x21)
		return (1);

	return (0);
}
