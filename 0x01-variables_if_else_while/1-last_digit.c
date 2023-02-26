#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define ARRAYSIZE 65
#define NONNUM 'g'

/**
 *print_eval - stdout evaluation
 *@n2: takes random number
 *@lastdigit2: takes last digit
 * Return: void
 */

void print_eval(int n2, int long lastdigit2)
	{
		if (lastdigit2 == 0)
		{
			printf("Last digit of %d is %ld and is 0\n", n2, lastdigit2);
		}
		else if (lastdigit2 < 6)
		{
			printf("Last digit of %d is %ld and is less than 6 and not 0\n",
					n2, lastdigit2);
		}
		else
		{
			printf("Last digit of %d is %ld and is greater than 5\n",
					n2, lastdigit2);
		}

		return;

	}

/**
* main - label random number
*
* Return: o (always)
*/

int main(void)
{
	int n;
	char str[ARRAYSIZE];
	long int lastdigit;
	int i = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	sprintf(str, "%d", n);

	while (str[i])
	{
		i++;
	}
	i--;
	lastdigit = strtol(str + i, NULL, 10);

	if (n < 0)
	{
		lastdigit /= -1;
	}

	print_eval(n, lastdigit);

	return (0);
}
