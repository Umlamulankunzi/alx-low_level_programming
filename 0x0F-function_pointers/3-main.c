#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Starting point of program
* @argc: int size of argc array
* @argv: array of char * of arguments to program
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Too many args\n");
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op)
		printf("%d\n", op(num1, num2));
	else
	{
		printf("%s", argv[2]);
		printf("Error\n");
		exit(99);
	}

	return (0);
}
