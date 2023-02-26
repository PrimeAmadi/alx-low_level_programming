#include <stdio.h>
#include <stdlib.h>

/**
* main - prints 'a'-'z' in reverse
*
* Return: 0 (Always)
*/

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);

}
