#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * strLength - Get length of string
 * @strng: string
 * Return: length(counter variable)
 */
int strLength(char *strng)
{
	int counter;

	for (counter = 0; *(strng + counter); counter++)
	{
		;
	}
	return (counter);
}

/**
 * strcopy - copies the string from src to dest
 * including the null byte (\0)
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of source
 */
char *strcopy(char *dest, char *src)
{
	int count;

	for (count = 0; count <= strLength(src); count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}

/**
 * new_dog - Creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *createdDog;

	char *copyName;
	char *copyOwner;

	createdDog = malloc(sizeof(dog_t));
	if (createdDog == NULL)
		return (NULL);

	createdDog->age = age;

	if (name != NULL)
	{
		copyName = malloc(strLength(name) + 1);
		if (copyName == NULL)
		{
			free(createdDog);
			return (NULL);
		}
		createdDog->name = strcopy(copyName, name);
	}
	else
		createdDog->name = NULL;

	if (owner != NULL)
	{
		copyOwner = malloc(strLength(owner) + 1);
		if (copyOwner == NULL)
		{
			free(copyName);
			free(createdDog);
			return (NULL);
		}
		createdDog->owner = strcopy(copyOwner, owner);
	}
	else
		createdDog->owner = NULL;

	return (createdDog);
}
