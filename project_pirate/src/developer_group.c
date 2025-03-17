#include "developer_group.h"
#include <stdio.h>
#include <string.h>

// Initializes a developer_group structure and sets the group logo
void init_developer_group(developer_group *group, const char *logo) {
    group->developer_count = 0;
    strncpy(group->logo, logo, sizeof(group->logo) - 1);
    group->logo[sizeof(group->logo) - 1] = '\0';
}

// Adds a new developer to the group
void add_developer(developer_group *group, developer dev) {
    if (group->developer_count < 2) { // Ensure the developer count does not exceed the limit
        group->developers[group->developer_count++] = dev;
    }
}

// Prints the details of all developers in the group
void print_developers(const developer_group *group) {
    for (int i = 0; i < group->developer_count; i++) {
        printf("Name: %s, Alias: %s\n", group->developers[i].name, group->developers[i].alias);
    }
}

// Prints the group logo
void print_group_logo(const developer_group *group) {
    printf("Group Logo: %s\n", group->logo);
}

// Prints the group logo and developer details
void print_group(const developer_group *group) {
    print_complex_logo(group);
    print_developers(group);
}
