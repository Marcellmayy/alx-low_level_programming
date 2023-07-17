#ifndef DOG_H
#define DOG_H

/**
 * struct dog: dog info
 * @name: character type
 * @age: float type
 * @owner: charcater type
 *
 *
 * Status: this stores different data types
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t

void init_dog(struct dog *d, char *name, float  age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char * name, float age, char * owner);

#endif
