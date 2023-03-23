#include <stdarg.h>
#include "variadic_functions.h"


/**
* sum_them_all - accept varying int arguments  and calculate sum
* @n: number of arguments
* @...: varying arguments
* Return: int sum of arguments or 0 if none
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(list, n);

	sum = 0;

	for(i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}
