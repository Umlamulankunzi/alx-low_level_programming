#include <stdio.h>


/**
* main - main start of program
* @argc: length of argv array
* @argv: arguments supplied to program array
* Return: 0 if succesful
*/
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
