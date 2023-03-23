#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
* print_strings - prints strings, followed by a new line.
* @separator: char *
* @n: number of arguments
* @...: varying arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	if (n)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			s  = va_arg(list, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");

			if (i !=  (n - 1))
				if (separator)
					printf("%s", separator);
		}
		va_end(list);
	}
	printf("\n");
}
