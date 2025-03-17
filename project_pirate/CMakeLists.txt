cmake_minimum_required(VERSION 3.20)

project(DeveloperGroup C)

# Set the C standard to C11
set(CMAKE_C_STANDARD 11)

# Enable additional warnings
set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic")

# Include directories
include_directories(include)

# Add the library for the developer modules
add_library(developer_module
/workspaces/Programm-Entwurf-Softwareentwicklung/project_pirate/src/developer.c
/workspaces/Programm-Entwurf-Softwareentwicklung/project_pirate/src/developer_group.c
/workspaces/Programm-Entwurf-Softwareentwicklung/project_pirate/src/logo.c
)

# Add the executable for the main application
add_executable(main /workspaces/Programm-Entwurf-Softwareentwicklung/project_pirate/main.c)

# Link the library with the executable
target_link_libraries(main developer_module)