#include <stdio.h>
#include <stdlib.h>

/**
* main - prints 'a'-'z' then 'A' - 'Z' and then newline
*
* Return: 0 (Always)
*/

int main(void)
{
	int i;

	/* ascii char 'a' is 97 which follow serially to char 'z' which 122 */

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
