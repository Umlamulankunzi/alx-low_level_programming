#include "main.h"



/**
* set_bit - set value of a bit at given index @index to 1.
* @n: pointer to an integer.
* @index: index of bit to set to 1.
* Return:  1 if successful Else -1 if Error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (BYTE_IN_BITS * sizeof(unsigned long int)))
		return (-1);

	*n = *n ^ (1 << index);
	return (1);
}
