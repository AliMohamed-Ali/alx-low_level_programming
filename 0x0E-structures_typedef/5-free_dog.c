#include "dog.h"
#include <stdio.h>
/**
 * free_dog - that free struct dog
 * @d: pointer for struct dog
*/

void free_dog(dog_t *d)
{
free(d->name);
free(d->age);
free(d->owner);
free(d);
}
