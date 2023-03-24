#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers in
 * in @... followed by a new line
 * @separator: separates the printed number
 * @n: number of passed arguments
 * @...: @n number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;


	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(nums);

}

