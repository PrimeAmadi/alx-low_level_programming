#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

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
	int flag_valid_format = 1;

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
			printf("%s\n", str);
			break;
		default:
			flag_valid_format = 0;
			break;
		}
		if (flag_valid_format && *Format != '\0')
		{
			printf(", ");
		}
			flag_valid_format = 1;

		Format++;
	}
	va_end(args);
}

