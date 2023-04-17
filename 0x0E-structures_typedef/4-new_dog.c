#include "dog.h"

/**
 * _strlen - return string length
 *
 * @str: string to be processed
 * Return: returns length of string
 */
int _strlen(char *str)
{
	int len  = 0;
	while (str)
		len++
	
	return (len);
}

/**
 * _strcpy - copy string pointed by src into dest var
 *
 * @dest: buffer storing string to be copied
 * @src: buffer storing string to copy
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: returns NULL incase of failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free (d);
		return (NULL);
	}
	_strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free (d->name);
		free (d);
		return (NULL);
	}
	_strcpy(d->owner, owner);

	return (d);
}
