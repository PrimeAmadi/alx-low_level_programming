#include "main.h"

/**
 * _strcat - concatenate src to the
 *  the end of dest string and return
 *  the resultant string (which is dest).
 *
 * @src: string to be concatinated to back dest
 * @dest: string to be concatenated to
 *
 * Return: @dest pointer to the updated string.
 */

char *_strcat(char *dest, char *src)
{


	printf("Entered function \n");
	unsigned long d = 0;
	unsigned long s = 0;

	if (dest == NULL)
		return (NULL);
	if (src == NULL)
		return (dest);
	printf("reached p-a\n");
	while (dest[d])
		d++;
/* while loop for number of element in
 * the strng including '\0' terminator.
 * counting from zero
 */

	printf("reached p-b\n");
	while (src[s])
	{
		dest[d + s] = src[s];
		s++;
	}
	printf("reached p-c\n");
	dest[d + s] = '\0';

	return (dest);
}
