#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct for dog attributes
 *
 * @name: dog name
 * @age: dog age
 * @owner: god owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
