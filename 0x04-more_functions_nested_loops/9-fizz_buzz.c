#include <stdio.h>
#include "main.h"

/**
* main - Entry point of program
* Return: 0 if successful
*/
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
* fizz_buzz - print numbers 1 to 100 and words fizz buzz
* Description:  print numbers 1 to 100. for multiples of
* 3 print Fizz, for multiples of 5 print Buzz and for
* multiples of 3 & 5 print FizzBuzz
*/
void fizz_buzz(void)
{
	int num;

	printf("1");

	for (num = 2; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf(" FizzBuzz");
		else if (num % 3 == 0)
			printf(" Fizz");
		else if (num % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", num);
	}
	printf("\n");
}

