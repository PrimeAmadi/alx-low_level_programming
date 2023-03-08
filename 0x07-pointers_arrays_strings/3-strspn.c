#include "main.h"

/**
 * _strspn - returns the length the first
 * string (which is a sub-string of @s)
 * that every of it's character
 *  can be found in accept.
 *  @s: string to search
 *  @accept: string holding characters to
 *  search for.
 *
 *  Return: length of matched string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int found_match = 0; /* flag is 1 if match found, 0 otherwise*/


	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = 1;
				break;
			}

		}

		if (!found_match)
			return (i + 1);/*len adjusted b.c i start from 0*/

		found_match = 0;

	}

	return (0); /*no match found*/
}
