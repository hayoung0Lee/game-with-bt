cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Find the raylib library
find_package(raylib REQUIRED)

# Add the path to the raylib headers to the include path
include_directories(${raylib_INCLUDE_DIRS})

# Add the executable for the project
add_executable(MyProject src/main.cpp)

# Add the path to the raylib library to the link directories
link_directories(${raylib_LIBRARY_DIRS})

# Link the executable with raylib
target_link_libraries(MyProject PRIVATE ${raylib_LIBRARIES})

# Set the C++ standard to C++17
set_property(TARGET MyProject PROPERTY CXX_STANDARD 17)