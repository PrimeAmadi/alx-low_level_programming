#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * is_one_of_us - test if
 * it is 'i' or 'f' or 's' or 'c'
 * @it: the char to test
 * Return: 1 if true 0 otherwise.
*/
int is_one_of_us(char it)
{
	return (it == 'i' || it == 'f' || it == 's' || it == 'c');
}

/**
 * print_all - prints anything in
 * in @...
 * NULL pointer to string is printed as "nil"
 * @format: "cifs" denotes char, int, float,
 * string respectively.
 * length of format is the number of argumnents to print
 * @...: @n number of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str = NULL;
	const char *Format = (void *)format;

	va_start(args, format);

	while (*Format)
	{
		switch (*Format)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				str = (str == NULL) ? "(nil)" : str;
				printf("%s", str);
				break;
			default:
				break;
		}
		Format++;
		if (is_one_of_us(*Format))
		{
			printf(", ");
		}
	}
	va_end(args);

}


