/**
 * init_dog - creates a dog
 * @d: the structure of the dog
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
