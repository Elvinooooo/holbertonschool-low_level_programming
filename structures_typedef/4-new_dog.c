#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* new_dog -  function that creates a new dog
* @name: dog name;
* @age: dog age;
* @owner: the owner of the dog;
*
* Return: new dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len, i, j;

	dog =  malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	name_len = 0;
	owner_len = 0;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;
	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];
	dog->name[name_len] = '\0';
	dog->age = age;
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < owner_len; j++)
		dog->owner[j] = owner[j];
	dog->owner[owner_len] = '\0';
	return (dog);
}
