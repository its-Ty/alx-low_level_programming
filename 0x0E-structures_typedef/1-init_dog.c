#include "dog.h"
#include "stdio.h"

/*
 * init_dog - initialize a variable of type struct dog
 * @d: variable of type struct dog
 * @name: member
 * @age: member
 * @owner: member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return (0);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
