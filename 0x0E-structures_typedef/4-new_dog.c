#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog_;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

dog_ = malloc(sizeof(dog_t));
if (dog_ == NULL)
return (NULL);

dog_->name = malloc(sizeof(char) * (_strlen(name) + 1));
dog_->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

if (dog_->name == NULL || dog_->owner == NULL) {

  if (dog_->name != NULL) {
    free(dog_->name);
  }
  free(dog_);
  return NULL;
}

dog_->name = _strcopy(dog_->name, name);
dog_->age = age;
dog_->owner = _strcopy(dog_->owner, owner);

return (dog_);
}
