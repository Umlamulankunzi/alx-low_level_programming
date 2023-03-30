#include <stdio.h>

void print_before_main_exec(void) __attribute__ ((constructor));

/**
 *print_before_main_exec - print msg before execution of main function
 */
void print_before_main_exec(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
