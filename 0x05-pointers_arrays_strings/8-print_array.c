#include <stdio.h>


/**
* print_array - prints n elements of an array of integers
* @a: array pointer
* @n: number of elements in array
*/
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != (n - 1))
			printf(", ");
	}
	printf("\n");
}
