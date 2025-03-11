cmake_minimum_required(VERSION 3.10)
project(md-renderer)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Include directories
include_directories(include)

# Add executable target
add_executable(md-renderer
    src/main.cpp
    src/parser.cpp
)

