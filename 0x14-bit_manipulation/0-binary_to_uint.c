#include "main.h"



/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to binary number string.
 * Return: converted number or 0 if Error.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0;

	if (b)
	{
		for (i = 0; b[i]; i++)
		{
			if (b[i] > '1' || b[i] < '0')
				return (0);

			result = 2 * result + (b[i] - '0');
		}
		return (result);
	}

	else
		return (0);
}
