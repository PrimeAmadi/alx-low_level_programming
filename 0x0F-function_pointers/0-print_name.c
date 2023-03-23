#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: <fill>
 * @f: <fill>
 * @Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
