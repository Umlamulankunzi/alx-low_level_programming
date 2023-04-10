#include "main.h"

/**
 * clear_bit - set value of a bit at given index @index to 0.
 * @n: pointer to integer.
 * @index: index of bit to set to 0.
 * Return: 1 if successful Else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (BYTE_IN_BITS * sizeof(unsigned long int)))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
