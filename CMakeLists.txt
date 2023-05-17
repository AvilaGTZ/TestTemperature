cmake_minimum_required(VERSION 3.12)
project(Temperature)

set(CMAKE_CXX_STANDARD 17)

# Agrega los directorios de código fuente y de inclusión
include_directories(inc)
add_subdirectory(src)

