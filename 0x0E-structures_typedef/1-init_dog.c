#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * function that initialize a variable of type struct dog
 * @d -struct name
 * @name- name of the dog
 * owner- owner of the dog
 * Author- Denis Bollo
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{

	if (d != NULL)
		d = malloc(sizeof(struct dog));
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
