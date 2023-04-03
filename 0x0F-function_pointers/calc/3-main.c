
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#define OP_IDX 2 /*operator index*/
#define OPD_A 1 /*first operand index*/
#define OPD_B 3 /*second operand index*/

/**
 * main - calc sum, diff, quotient
 * and division remainder of 2 ints.
 *
 * @argc: number of args, must be 4
 * @argv: strings of args
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int) = NULL;
	int ans = 0;

	if (argc != 4)
	{
		printf("\nERROR - no of argument incorrect\n");
		while (argc > -1)
		{
			printf("arg %d :%s\n", argc, argv[argc]);
			argc--;
		}
		exit(98);
	}

	operation = get_op_func(argv[OP_IDX]);

	if (!operation)
	{
		printf("\nERROR - invalid operator\n");
		exit(99);
	}

	if (*argv[OPD_B] == '\0' &&
		       (argv[OP_IDX][1] == '/' || argv[OP_IDX][1] == '%'))
	/*
	 * [][1] because i expect to find the operator
	 * there (why? qoutes glob expansion issue)
	 */
	{
		printf("\nERROR - divide or mod by zero\n");
		exit(100);
	}

	ans = operation(atoi(argv[OPD_A]), atoi(argv[OPD_B]));

	printf
	("\n\tans = %d\n", ans);

	return (0);
}

