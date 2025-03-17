/**********************************************
program name: project pirate 
date: 17.03.2025
version: 1.0
developers: Jannis Messer, Cedric Stroh
language: C 
status: final
***********************************************/

#include <stdio.h>
#include "developer_group.h"
#include "logo.h" // New header file for the logo function

int main() {
    developer_group group;

    // Initialize the developer group with a name and logo
    init_developer_group(&group, "Pirate's Treasure Crew");

    // Add developers to the group
    developer dev1, dev2;
    init_developer(&dev1, "Cedric", "Cedboom");
    init_developer(&dev2, "Jannis", "zu0");
    add_developer(&group, dev1);
    add_developer(&group, dev2);

    int choice;
    while (1) {
        // Display the interactive menu
        printf("\n");
        printf("============================================\n");
        printf("⚓️  Welcome to the Pirate's Treasure Crew ⚓️\n");
        printf("============================================\n");
        printf("  Choose an action:\n");
        printf("  [1] 🏴 List Developers\n");
        printf("  [2] 🏴‍☠️ Print Group Logo\n");
        printf("  [3] 💰 Print Full Group\n");
        printf("  [4] 🚪 Exit\n");
        printf("============================================\n");
        printf("  Enter your choice: ");
        scanf("%d", &choice);

        // Process the user's choice
        switch (choice) {
            case 1:
                print_developers(&group);
                break;
            case 2:
                print_complex_logo(); // Call the external logo function
                break;
            case 3:
                print_group(&group);
                break;
            case 4:
                printf("\nThank you for visiting the Pirate's Treasure Crew! ⚓️\n");
                printf("Exiting program...\n");
                return 0;
            default:
                printf("\n⚠️ Invalid choice! Please enter a number between 1 and 4.\n");
        }
    }
    return 0;
}
