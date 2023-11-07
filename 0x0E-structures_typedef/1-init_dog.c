#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - main entry
 * @d: input
 * @name: name
 * @age: age
 * @owner: owner
 * Return: No retune type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
