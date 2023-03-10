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
	int sum, num;

	sum = 0;

	argc--;

	while (argc > 0)
	{
		num = atoi(argv[argc]);

		if (*argv[argc] != '0' && num == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}
		argc--;
	}
	printf("%d\n", sum);
	return (0);
}
