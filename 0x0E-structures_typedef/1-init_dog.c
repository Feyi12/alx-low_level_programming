#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: Struct for initializaiton
 * @name: name char array
 * @age: age float value
 * @owner: owner name char array
 * Return: Always 0
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
