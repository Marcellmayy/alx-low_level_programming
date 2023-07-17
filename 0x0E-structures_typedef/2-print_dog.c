#include <stdio.h>
#include "dog.h"

/**
 * print_dog: a function with a nested argument
 * @d: structure pointer
 *
 *
 * Description: print struct
 * status: to print a struct
 * return : name of the struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Nmae:(nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
