#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;




/*****************************************************
* ---------  FUNCTION PROTYPES ----------------------*
*****************************************************/
int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
