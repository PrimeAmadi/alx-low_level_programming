#include "main.h"

/**
 * more_numbers - print to 14
 * 10 times
 */

void more_numbers(void)
{
	int i;
	int d;
	char str[2];

	str[0] = '1';

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d < 10)
				putchar('0' + d);
			if (d >= 10)
			{
				str[1] = '0' + d - 10;
				for (int si = 0; si < 2; si++)
					putchar(str[si]);
			}
		}
		putchar('\n');
	}

	/*putchar('\n');*/
}
