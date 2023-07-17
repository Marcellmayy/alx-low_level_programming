#include <stdio.h>
#include "dog.h"

/**
 * print_dog - 1 function with a nested argument
 * @d: structure pointer
 *
 *
 * Description: print struct dog
 *
 * return : name of the struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name:(nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
