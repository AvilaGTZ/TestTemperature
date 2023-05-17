cmake_minimum_required(VERSION 3.12)
project(Temperature)

set(CMAKE_CXX_STANDARD 17)

# Agrega los directorios de código fuente y de inclusión
include_directories(inc)

# Agrega todos los archivos fuente del proyecto
file(GLOB SOURCES ./*.cpp)

# Crea una biblioteca compartida
add_library(temperature SHARED ${SOURCES})

# Establece la ubicación de salida de la biblioteca compartida
#set_target_properties(temperature PROPERTIES
#    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/../build
#    LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_BINARY_DIR}/../build
#    LIBRARY_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_BINARY_DIR}/../build
#)

# Compila el archivo main.cpp como un ejecutable independiente
add_executable(TestTemperature ./main.cpp)

# Enlaza el ejecutable con la biblioteca compartida
target_link_libraries(TestTemperature temperature)

