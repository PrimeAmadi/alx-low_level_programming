#include <stdio.h>
#include <stdlib.h>

/**
* main - prints '0'-'9'
*
* Return: 0 (Always)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);

}
