#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *new_name;
    char *new_owner;
    int i;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    for (i = 0; name[i]; i++)
        ;
    new_name = malloc(sizeof(char) * (i + 1));
    if (new_name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    for (i = 0; owner[i]; i++)
        ;
    new_owner = malloc(sizeof(char) * (i + 1));
    if (new_owner == NULL)
    {
        free(new_name);
        free(new_dog);
        return (NULL);
    }

    for (i = 0; name[i]; i++)
        new_name[i] = name[i];
    new_name[i] = '\0';

    for (i = 0; owner[i]; i++)
        new_owner[i] = owner[i];
    new_owner[i] = '\0';

    new_dog->name = new_name;
    new_dog->age = age;
    new_dog->owner = new_owner;

    return (new_dog);
}
