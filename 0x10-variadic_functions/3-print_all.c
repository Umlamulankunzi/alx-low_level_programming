#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>

#include "variadic_functions.h"

/**
 * print_all - prints anything referenced by format string
 * @format: This is the format to print a value
 * @... : optional arguments
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *str;
	int i;

	i = 0;
	va_start(list, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(list, int));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
