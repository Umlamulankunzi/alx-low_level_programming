#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if succesfful
*/
int main(void)
{
	int num;
	int num2;
	int num3;
	int num4;

	for (num = 48; num <= 57; num++)
	{
		for (num2 = num; num2 <= 57; num2++)
		{
			for (num3 = num2; num3 <= 57; num3++)
				{
				if (num != num2 && num != num3 && num2 != num3)
				{
					putchar(num);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);

					if (num == 55 && num2 == 56 && num3 == 57)
					{
						break;
					}
					else
					{
						putchar(',');

					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
