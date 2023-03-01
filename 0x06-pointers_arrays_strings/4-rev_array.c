#include "main.h"


/**
* reverse_array - reverses the content of an array of integers
* @a: int array
* @n: number of elements of array @a
*/
void reverse_array(int *a, int n)
{
	int temp, i, limit;
	
	limit = n / 2;
	n--;
	

	for (i = 0; i <= limit; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
