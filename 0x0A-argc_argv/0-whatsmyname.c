#include <stdio.h>


/**
* main - main start of program
* @argc: length of argv array
* @argv: arguments supplied to program array
* Return: 0 if succesful
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[argc - 1]);
	else
		printf("%s\n", argv[0]);
	return (0);
}
