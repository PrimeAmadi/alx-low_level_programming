#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: <fill>
 * @f: <fill>
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(*f)(name);
}
