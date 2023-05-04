#include "main.h"

/**
 * get_endianness - Checks if computer is litte or big endian.
 *
 * Return: (0) If big-endian Else (-1) if little-endian.
 */
int get_endianness(void)
{
	int num = 1;
	char *is_endian = (char *)&num;

	if (*is_endian == 1)
		return (1);
	return (0);
}
