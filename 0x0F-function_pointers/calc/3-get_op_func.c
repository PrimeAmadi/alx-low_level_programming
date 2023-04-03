#include "3-calc.h"
#include "string.h"

/**
 * get_op_func  - is a function that takes
 * char *s as arg and returns a pointer to
 * function that takes two int args and return
 * an int
 *
 * @s : is the operator character
 * Return: a funtion pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	ops[2].op = "'*'", ops[4].op = "'%'";
	/*redundant if i were able to change*/
	/* the variable op - because of the task requirement*/

	while (ops[i].op != NULL && strncmp(ops[i].op, s, 4))
	{
		i++;
	}

	return (ops[i].f);
}

