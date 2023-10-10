#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog, or NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lena, leno;
	struct dog *new_dog;

	lena = 0;
	while (name[lena] != '\0')
		lena++;
	leno = 0;
	while (owner[leno] != '\0')
		leno++;
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(lena + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	new_dog->owner = malloc(leno + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}
	for (i = 0; i <= lena; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= leno; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
