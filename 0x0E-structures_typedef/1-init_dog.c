#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function with 4 arguments
 * @d: structure pointer
 * @name: character type
 * @age: float type
 * @owner: character type
 *
 * Description: initialize a variable of type
 * Return: n/a
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
