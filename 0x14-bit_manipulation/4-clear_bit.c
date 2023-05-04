#include "main.h"

/**
 * clear_bit - set value of bit at given index @index to 0.
 * @n: pointer to integer.
 * @index: index.
 * Return: (1) If successful Else (-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
