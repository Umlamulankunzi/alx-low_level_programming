#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	char *str2;
	char *str3;
	char *str4;

	str = "0123456789";
	str2 = "Holberton!";
	str3 = "012345678";
	str4 = "nsequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

	puts_half(str);
	puts_half(str2);
	puts_half(str3);
	puts_half(str4);

	return (0);
}
