#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - dog describing struct
* @name: the name of the dog
* @age: float age of the dog
* @owner: The name of the owner of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
