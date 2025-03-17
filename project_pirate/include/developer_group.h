#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H

#include "developer.h" // Includes the definitions and declarations for the 'developer' structure.

// Definition of the 'developer_group' structure.
// This structure represents a group of developers and includes:
// - An array of up to 2 developers.
// - A counter for the current number of developers in the group.
// - A string for storing the group's logo.
typedef struct {
    developer developers[2]; // Array of developer structures (maximum of 2 developers).
    int developer_count;     // Counter for the number of developers currently in the group.
    char logo[100];          // String to store the group logo (max 99 characters + null terminator).
} developer_group;

// Function declaration:
// This function initializes a 'developer_group' structure with a given logo and sets the developer count to 0.
// Parameters:
// - group: Pointer to the developer_group structure to be initialized.
// - logo: The logo to assign to the group.
void init_developer_group(developer_group *group, const char *logo);

// Function declaration:
// This function adds a new developer to the group if the limit has not been reached.
// Parameters:
// - group: Pointer to the developer_group structure.
// - dev: The developer to be added to the group.
void add_developer(developer_group *group, developer dev);

// Function declaration:
// This function prints the names and aliases of all developers in the group.
// Parameters:
// - group: Pointer to the developer_group structure containing the developers.
void print_developers(const developer_group *group);

// Function declaration:
// This function prints the group's logo.
// Parameters:
// - group: Pointer to the developer_group structure containing the logo.
void print_group_logo(const developer_group *group);

// Function declaration:
// This function prints both the group's logo and the details of all developers in the group.
// Parameters:
// - group: Pointer to the developer_group structure.
void print_group(const developer_group *group);

#endif // DEVELOPER_GROUP_H
