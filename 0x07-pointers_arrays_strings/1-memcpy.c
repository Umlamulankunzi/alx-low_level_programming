#include "main.h"


/**
 *_memcpy -   copy n  bytes frim src to dest
 *@dest: char *
 *@src: char *
 *@n: size of bytes
 *Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

