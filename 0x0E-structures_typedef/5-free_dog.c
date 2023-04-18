#include "dog.h"
#include <stdio.h>
/**
 * free_dog - that free struct dog
 * @d: pointer of struct dog
*/

void free_dog(dog_t *d)
{
if (d)
{
d->name && free(d->name);
d->owner && free(d->owner);
free(d);
}
}
