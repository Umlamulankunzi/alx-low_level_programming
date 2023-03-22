#include <stdio.h>
#include <stdlib.h>


/**
* main - Starting point of program
* @argc: int size of @argv array
* @argv: char * array of arguments passed to program
* Return: 0 if succesful
*/
int main(int argc, char *argv[])
{
	char *op_code = (char *) main;
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[2]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;

	while (i < num_bytes)
	{
		printf("%02x", op_code[i] & 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
