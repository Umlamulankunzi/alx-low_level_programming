#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if successful
*/
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
