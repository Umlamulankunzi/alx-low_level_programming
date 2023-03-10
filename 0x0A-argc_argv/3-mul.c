#include <stdio.h>
#include <stdlib.h>



/**
* main - main start of program
* @argc: length of argv array
* @argv: arguments supplied to program array
* Return: 0 if succesful
*/
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}
