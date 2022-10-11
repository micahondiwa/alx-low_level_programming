#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that stores dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: struct called "dog" that stores its name, gae,
 * and name of its ownwer
 */
struct dog
{
	char * name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t, *d);

#endif
