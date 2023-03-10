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
	int num, n_coins;

	n_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		num = atoi(argv[1]);

	if (num <= 0)
		printf("%d\n", 0);
	else
	{
		n_coins += num / 25;
		num = num % 25;

		n_coins += num / 10;
		num = num % 10;

		n_coins += num / 5;
		num = num % 5;

		n_coins += num / 2;
		num = num % 2;

		n_coins += num;
		printf("%d\n", n_coins);
	}
	return (0);
}
