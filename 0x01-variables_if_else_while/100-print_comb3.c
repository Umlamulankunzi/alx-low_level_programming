#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if succesfful
*/
int main(void)
{
	char ch;
	char ch2;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (ch2 = ch; ch2 <= '9'; ch2++)
		{
			if (ch != ch2)
			{
				putchar(ch);
				putchar(ch2);
				if (ch == '8' && ch2 == '9')
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
