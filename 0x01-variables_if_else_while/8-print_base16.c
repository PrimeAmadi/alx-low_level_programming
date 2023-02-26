#include <stdio.h>

/**
* main - outputs all the digit of HEX
*
*Return: 0 (Always)
*/

int main(void)
{
	int i = 0;
	int hexchar = '0';

	while (i < 16)
	{
		putchar(hexchar);
		if (hexchar == '9')
			hexchar = 'a' - 1;
		/*
		*skips to 'a'
		*'a' - 1 to upset premature incrementation
		*/
		hexchar++;
		i++;
	}
	putchar('\n');
	return (0);
}
