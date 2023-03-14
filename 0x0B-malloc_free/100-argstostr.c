#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: size of av array
 * @av: array of strings
 *
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
	char *sptr;
	int c, i, j, k;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	sptr = malloc((c + 1) * sizeof(char));

	if (sptr == NULL)
	{
		return (NULL);
	}

	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			sptr[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			sptr[k] = av[i][j];
	}
	sptr[k] = '\0';

	return (sptr);
}
