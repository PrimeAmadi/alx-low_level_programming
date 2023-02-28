/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = -sign;
		if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0') * sign;
		if (*s == '+')
			sign = 1;
		if (*s == '-' && *(s + 1) == '\0')
			return (0);
		s++;
	}

	return (result);
}
