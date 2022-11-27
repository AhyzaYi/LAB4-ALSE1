cmake_minimum_required(VERSION 3.24.2)

project(laboratorio4.)

include_directories(include)


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/src)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set (SOURCES src/main.cpp src/funciones_gr1.cpp src/config_tty.cpp)

add_executable(laboratorio4.bin ${SOURCES})
