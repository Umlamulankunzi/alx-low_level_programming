#include "main.h"


/**
 * get_bit - find the value of a bit at a given index @index.
 * @n: integer value
 * @index: index to find from the int value @n
 * Return: bit value at given index @index Else -1 if Error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (BYTE_IN_BITS * sizeof(unsigned long int)))
		return (-1);
	else if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
