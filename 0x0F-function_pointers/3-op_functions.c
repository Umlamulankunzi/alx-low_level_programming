#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
* op_add - add two integers
* @a: int
* @b: int
* Return: int sum of @a and @b
*/
int op_add(int a, int b)
{
	return (a + b);
}


/**
* op_sub - subtract two integers
* @a: int
* @b: int
* Return: int difference of @a and @b
*/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
* op_mul - multiply two integers
* @a: int
* @b: int
* Return: int product of @a and @b
*/
int op_mul(int a, int b)
{
	return (a * b);
}



/**
* op_div - divide two integers
* @a: int
* @b: int
* Return: int division result of @a and @b
*/
int op_div(int a, int b)
{
	if (b)
		return (a / b);
	printf("Error\n");
	exit(100);
}


/**
* op_mod - modulo divide two integers
* @a: int
* @b: int
* Return: int remainder of division of @a and @b
*/
int op_mod(int a, int b)
{
	if (b)
		return (a % b);
	printf("Error\n");
	exit(100);
}
