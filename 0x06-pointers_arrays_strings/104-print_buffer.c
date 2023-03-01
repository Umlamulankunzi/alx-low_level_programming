#include "main.h"
#include <stdio.h>

/**
 * is_printable - checks if char @n is a printable
 * @n: integer
 * Return: 1 if true, 0 if false
 */
int is_printable(int ch)
{
	return (ch >= 32 && ch <= 126);
}


/**
 * print_hex - print hex values for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void print_hex(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}


/**
 * print_ascii - print ascii values for string b,
 * @b: string to print
 * @start: starting index
 * @end: ending index
 */
void print_ascii(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!is_printable(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}


/**
 * print_buffer - prints buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			print_hex(b, start, end);
			print_ascii(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
