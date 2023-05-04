#include "main.h"



/**
 * set_bit - sets value of a bit at a given index to 1.
 * @n: pointer to the unsigned long int.
 * @index: index to set the value at.
 * Return: (1) If successful Else (-1) if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is within bounds of number @n */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
