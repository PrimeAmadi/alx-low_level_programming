#include <stdio.h>
#include <stdlib.h>

/**
* main - prints a-z and then newline
* Description: did it with 1 putchar(),
*		gotta sacrifice simplicity though.
* Return: 0 (Always)
*/

int main(void)
{
	int i;

	for (i = 'a'; i < 'z' + 2; i++)
	{
		if (i > 'z')
		{
			i = '\n';
		}
		putchar(i);
		if (i  == '\n')
		{
			break;
		}
	}

	return (0);

}
