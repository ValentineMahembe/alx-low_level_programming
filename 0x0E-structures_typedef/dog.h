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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);

#endif
