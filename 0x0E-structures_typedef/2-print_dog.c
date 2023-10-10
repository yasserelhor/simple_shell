#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to a struct dog.
 *
 * Description: This function
 * prints the name, age, and owner of a dog
 * if the pointer to the struct dog is not NULL.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
