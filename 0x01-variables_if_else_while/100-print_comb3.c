#include <stdio.h>

/**
 * main - print every combo
 * of 2 digit, non-repeating
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{	/*Add ", " after number except the last one*/
				putchar(',');
				putchar(' ');
			}
		}
	}
	
	putchar('\n');

	return (0);
}
