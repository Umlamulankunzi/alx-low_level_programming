#include "main.h"



/**
 * get_bit - gets value of bit at given index @index from number @n.
 * @n: unsigned integer number.
 * @index: index
 * Return: value of bit at index @index Else (-1) if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* check if index is within bounds of input number @n*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);


	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
