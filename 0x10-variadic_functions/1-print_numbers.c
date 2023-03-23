#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
* print_numbers - prints numbers, followed by a new line.
* @separator: char *
* @n: number of arguments
* @...: varying arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));

			if (i !=  (n - 1))
				if (separator)
					printf("%s", separator);
		}
		va_end(list);
		printf
	}
}
