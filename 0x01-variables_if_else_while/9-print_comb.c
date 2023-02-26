#include <stdio.h>

/**
 * main - prints all possible combo
 * if single digit
 * Return: 0 always
 */

int main(void)
{
	char *s = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
	int i = 0;

	while (s[i])
	{
		putchar(s[i++]);
	}
}
