#include <stdio.h>
#include <stdlib.c>

/**
 * print_dog - prints a struct dog
 * @d : pointer to struct dog
 */

void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d == NULL)
		return;
	name = (d->name == NULL) ? "nil" : d->name;
	owner = (d->owner == NULL) ? "nil" : d->owner;
	

	
}

void printon(int argc, char *argv[])
{
	int  i = 0;

	while(argc)
	{
		while(argv[argc][i])
		{
			putchar(argv[argc][i]);
			i++;
		}
		argc++;
	}
}

