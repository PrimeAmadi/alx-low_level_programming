#include <stdio.h>
#include <stdlib.h>

/**
* main - prints 'a'-'z' execept 'q' and 'e'
*
* Return: 0 (Always)
*/

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');

	return (0);

}
