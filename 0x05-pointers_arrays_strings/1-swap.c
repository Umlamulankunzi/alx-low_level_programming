#include "main.h"

/**
* swap_int - swaps the dereferrenced values of two pointers
* @a: pointer to first int
* @b: pointer to second int
* Description: swap the derefferenced values of two pointers
*/
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

