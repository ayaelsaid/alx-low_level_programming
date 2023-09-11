#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - function that creates a new dog
 * @name: string
 * @age: float
 * @owner: string
 * description: declare the value
 * Return: NULL or new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, len1, len2;
	dog_t *new_dog;

	i = 0;
	while (name[i] != '\0')
		i++;
	len1 = i + 1;
	j = 0;
	while (owner[j] != '\0')
		j++;
	len2 = j + 1;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	new_dog->name[i] = name[i];
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	new_dog->owner[i] = owner[i];
	return (new_dog);
}
