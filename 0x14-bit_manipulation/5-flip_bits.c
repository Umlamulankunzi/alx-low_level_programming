#include "main.h"

/**
* flip_bits - calculate total bits to flip to get number @m to @n.
* @n: int number.
* @m: int number to flip bits to.
* Return: number of bits to flip to get int value @m.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits_to_flip = n ^ m;
	unsigned int bit_count = 0;

	while (bits_to_flip)
	{
		bit_count += (bits_to_flip & 1);
		bits_to_flip >>= 1;
	}
	return (bit_count);
}
