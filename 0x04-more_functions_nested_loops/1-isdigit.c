#include "main.h"

/**
 * _isdigit - check if a character
 * represents a digit
 * @c: the int value of the char to
 * be eval
 * Return: 1 if @c is digit,
 * 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
