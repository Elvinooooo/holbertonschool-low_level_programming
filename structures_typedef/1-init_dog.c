#include "dog.h"
#include <stdlib.h>
/**
* init_dog -  function that initialize a variable of type struct dog
* @d:variable that will be of the struct dog
* @name: the name of the dog
* @owner: the owener of the dog
* @age: the age of the dog
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
