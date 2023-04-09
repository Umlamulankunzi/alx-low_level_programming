#include <stdlib.h>
#include "main.h"
#include <unistd.h>

int _putchar(char c);
int *to_array(char *str_n);
unsigned int len_str(char *str);
int is_valid_number(char *str_digit);
void print(char *s);

/**
* main - Starting point of program
* @argc: size of argc array
* @argv: string array of arguments passed to program
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int argv_index;

	if (argc != 3)
	{
		print("Error\n");
		exit(98);
	}

	for (argv_index = 0; argv_index <= argc; argv_index++)
	{
		if (is_valid_number(argv[argv_index]))
		{
			print("Error\n");
			exit(98);
		}
	}




	
	return (0);
}


void print(char *s)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		_putchar(*(s + i));
}




int is_valid_number(char *str_digit)
{
	unsigned int i;

	for (i = 0; *(str_digit + i) != '\0'; i++)
	{
		if (*str_digit >= '0' && *str_digit <= '9')
			continue;
		else
			return (0);
	}
	return (1);
}


unsigned int len_str(char *str)
{
	unsigned int i;

	for (i = 0; *(str + i) != '\0'; i++)
		;
	return (i);
}


void fill_array(char *src, int *dest)
{
	
}

int *to_array(char *str_n)
{
	int *buffer;
	unsigned int size;

	size = len_str(str_n);
	buffer = malloc(size * sizeof(int));

	if (buffer == NULL)
		return (NULL);

	fill_array(str_n, buffer);



}


int char_to_int(char c)
{
	return (c - '0');
}


int _putchar(char c)
{
	return (write(1, &c, 1));
}
