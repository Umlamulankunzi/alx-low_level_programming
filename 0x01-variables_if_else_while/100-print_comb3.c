#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if succesfful
*/
int main(void)
{
	int ch;
	int ch2;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = ch; ch2 <= 57; ch2++)
		{
			if (ch != ch2)
			{
				putchar(ch);
				putchar(ch2);
				if (ch == 56 && ch2 == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}

	putchar('\n');
	return (0);
}
