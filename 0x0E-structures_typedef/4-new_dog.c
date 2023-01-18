#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nlen, wlen, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	for (nlen = 0; name[nlen] != '\0'; nlen++)
		;
	for (wlen = 0; owner[wlen] != '\0'; wlen++)
		;

	dog->name = malloc(sizeof(char) * nlen + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = malloc(sizeof(char) * wlen + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= nlen; i++)
		dog->name[i] = name[i];
	for (i = 0; i <= wlen; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
