#ifndef DEVELOPER_H
#define DEVELOPER_H

// Include guard to ensure the header file is included only once during compilation.
// Prevents redefinition errors.
typedef struct {
   char name[50];  // Space for storing the developer's name (max 49 characters + null terminator).
   char alias[50]; // Space for storing the developer's alias (max 49 characters + null terminator).
} developer; // Definition of the structure 'developer', representing a person with a name and alias.

// Function declaration:
// This function initializes a 'developer' structure with a given name and alias.
// Parameters:
// - dev: Pointer to the developer structure to be initialized.
// - name: The name to assign to the developer.
// - alias: The alias to assign to the developer.
void init_developer(developer *dev, const char *name, const char *alias);

#endif // DEVELOPER_H