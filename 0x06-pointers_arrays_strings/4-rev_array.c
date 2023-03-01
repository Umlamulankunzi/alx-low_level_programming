#include "main.h"


/**
* reverse_array - reverses the content of an array of integers
* @a: int array
* @n: number of elements of array @a
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;

	for (i = 0; i <= n; i++)
	{
		temp = a[n - i];
		a[n - i] = a[i];
		a[i] = temp;
		n--;
	}
}
