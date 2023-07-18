#include <stddef.h>
#include "dog.h"

/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to the struct dog to initialize
* @name: Name of the dog (char pointer)
* @age: Age of the dog (float)
* @owner: Owner of the dog (char pointer)
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

