#include "main.h"


/**
* reverse_array - reverses the content of an array of integers
* @a: int array
* @n: number of elements of array @a
*/
void reverse_array(int *a, int n)
{
	int temp_arr[1000], i, j;

	j = n - 1;


	for (i = 0; i <= n; i++)
	{
		temp_arr[i] = a[j];
		j--;
	}

	for (i = 0; i <= n; i++)
	{
		a[i] = temp_arr[i];
	}
}
