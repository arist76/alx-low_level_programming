#ifndef _DOG_H_
#define _DOG_H_

typedef struct dog dog_t;

/**
 * struct dog - represents a dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: represents a dog with
 * a name, age and an owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
