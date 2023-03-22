#include "function_pointers.h"


/**
* print_name - print string name
* @name: string name to print
* @f: function pointer to use to print @name
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

