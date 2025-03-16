#include "developer.h"
#include <string.h>

// Initializes a developer structure with a name and an alias
void init_developer(developer *dev, const char *name, const char *alias) {
   strncpy(dev->name, name, sizeof(dev->name) - 1);
   dev->name[sizeof(dev->name) - 1] = '\0';

   strncpy(dev->alias, alias, sizeof(dev->alias) - 1);
   dev->alias[sizeof(dev->alias) - 1] = '\0';
}