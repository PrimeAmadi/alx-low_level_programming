#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: s1[i] - s2[i]
 * else zero.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			return (s1[i] - s2[i]);
	}

	if (!(s1[i] && s2[i])) /*test for a last unmatched '\0'*/
		return (s1[i] - s2[i]); /* no need to return 0, this does*/

	return (0);
}
