#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
*_strlen - returns length of
*a string
*@str: string to be counted
*Return: returns length of string
*/
int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}


/**
*_strcopy - copy string pointed by src
*into dest variable
*@dest:buffer storing string copy
*@src: buffer storing string to copy
*Return:returns copied string
*/
char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}

/**
*new_dog - create a new dog
*@name: new dog name
*@age: new dog age
*@owner: new dog owner
*Return: if fail returns NULL
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
