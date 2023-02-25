#include "main.h"

/**
 * more_numbers - print to 14
 * 10 times
 */

void more_numbers(void)
{
	int i;
	int d;

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d < 10)
				putchar('0' + d);
			if (d >= 10)
			{
				putchar('1');
				putchar('0' + d - 10);
			}
		}
		if (i != 9)
			putchar('\n');
	}

	/*putchar('\n');*/
}
