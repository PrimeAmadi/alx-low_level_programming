/**
 * _strcpy - copies the string pointed
 * to by src, including the null byte,
 * to the buffer pointed to by dest
 * @dest: buffer to copy to
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ret);
}
