#include "main.h"


/**
 * flip_bits - gets number of bits needed to flip from one number to another.
 * @n: number to flip from to @m.
 * @m: number to fliup to from @n.
 * Return: number of bits to flip to get from @n to @m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count_bits = 0; nm_xor = n ^ m,

	while (nm_xor > 0)
	{
		count_bits += (nm_xor & 1);
		nm_xor >>= 1;
	}

	return (count_bits);
}
